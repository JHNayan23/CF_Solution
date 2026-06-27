#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    int a[n];
    int xr = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        xr ^= a[i];
    }
    if (n == 1) return cout << "0
", void();
    if (xr == 0) return cout << "1
", void();
    int H = 63 - __builtin_clzll(xr);
    int ans = 0;
    for (int i = 0; i < n; i++) if ((a[i] >> H) & 1) ans++;
    cout << ans % 998244353 << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}