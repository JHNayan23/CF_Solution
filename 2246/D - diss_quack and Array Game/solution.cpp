#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
const int a = 1e5, b = 6e5;
int table[20][a + 1];
 
int yo(int x) {
    return x ? 63 - __builtin_clzll(x) + __builtin_popcountll(x) : 0;
}
 
void solve()
{
    int n; cin >> n;
    vector<int> arr(n);
    int sum = 0;
    for (auto &i : arr) cin >> i, sum += i;
    int ans = 6e18;
    for (int i = 0; i < 20; i++) {
        int cur = i - sum;
        for (auto e : arr) cur += table[i][e];
        ans = min(ans, cur);
    }
    cout << ans << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
 
    // vector<pair<int,int>> vp;
    // for (int x = 0; x <= b; x++) {
    //     if (x % (1 << i) == 0) vp.push_back({x, x + yo(x) - i});
    // }
    // for (int x = 0; x <= a; x++) {
    //     int bst = 6e18;
    //     for (auto [v, cost] : vp) {
    //         if (v >= x) bst = min(bst, cost);
    //     }
    //     table[i][x] = bst;
    // }
    for (int i = 0; i < 20; i++) {
        vector<int> v(b + 2, 6e18);
        int s = 1 << i;
        for (int j = 0; j <= b; j += s) v[j] = j + yo(j) - i;
        for (int k = b; k >= 0; k--) v[k] = min(v[k], v[k + 1]);
        for (int l = 0; l <= a; l++) table[i][l] = v[l];
    }
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}