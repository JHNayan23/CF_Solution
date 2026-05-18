#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n, a, b; cin >> n >> a >> b;
    if (3 * a <= b) return void(cout << n * a << '
');
    int Q = n / 3, R = n % 3, ans = Q * b;
    if (R == 1) return void(cout << ans + min(a, b) << '
');
    if (R == 2) return void(cout << ans + min(2 * a, b) << '
');
    cout << ans << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}