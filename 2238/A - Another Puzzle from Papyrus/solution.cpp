#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n, c; cin >> n >> c;
    vector<int> a(n), b(n);
    int sa = 0, sb = 0;
    for (auto &i : a) cin >> i, sa += i;
    for (auto &i : b) cin >> i, sb += i;
 
    auto yo = [&](vector<int> x, vector<int> y) {
        for (int i = 0; i < n; i++) 
            if (x[i] < y[i]) return false;
        return true;
    };
 
    if (yo(a, b)) cout << sa - sb << '
';
    else {
        sort (all(a)); sort(all(b));
        cout << (yo(a, b) ? c + sa - sb : -1) << '
';
    }
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}