#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    int rem = n % 12;
    int ans = 0;
    if (rem == 11) ans = 0;
    else if (rem == 10) ans = 11;
    else if (rem <= 9) ans = rem - 11;
    ans += 11;
    if (ans <= n) cout << ans << ' ' << n - ans << '
';
    else cout << -1 << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}