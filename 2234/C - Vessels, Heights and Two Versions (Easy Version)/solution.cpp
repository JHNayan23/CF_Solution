#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n);
    for (auto &e : a) cin >> e;
    for (int i = 0; i < n; i++) {
        vector<int> pani(n), suf(n + 1, 0);
        for (int j = 0; j < n; j++) pani[j] = a[(i + j) % n];
        for (int j = n - 1; j >= 0; j--) suf[j] = max(suf[j + 1], pani[j]);
        int pre = 0, ans = 0;
        for (int j = 1; j < n; j++) {
            pre = max(pre, pani[j - 1]);
            ans += min(pre, suf[j]);
        }
        cout << ans << ' ';
    }
    cout << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}