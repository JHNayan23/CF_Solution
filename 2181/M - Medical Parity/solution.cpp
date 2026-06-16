#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    string a, b; cin >> a >> b;
    int n = a.size();
    int dp0 = 0, dp1 = 1e9;
    for (int i = 0; i < n; i++) {
        int x = a[i] - '0', y = b[i] - '0';
        int c1 = dp0 + (y != 0) + (x != 0);
        int c2 = dp1 + (y != 0) + (x != 1);
        int ndp0 = min(c1, c2);
        int c3 = dp0 + (y != 1) + (x != 1);
        int c4 = dp1 + (y != 1) + (x != 0);
        int ndp1 = min(c3, c4);
        dp0 = ndp0;
        dp1 = ndp1;
    }
    cout << min(dp0, dp1) << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}