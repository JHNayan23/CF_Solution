#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n, x, s; cin >> n >> x >> s;
    string ss; cin >> ss;
    vector<int> dpr(n + 1, 0);
    vector<int> dpx(n + 1, 0);
    vector<int> dpc(n + 1, 0);
    vector<int> dp(n + 1, 0);
    dpx[0] = x;
    dpr[0] = 0;
    dpc[0] = 0;
    dp[0] = 0;
    for (int i = 0; i < n; ++i) {
        char c = ss[i];
        dpx[i + 1] = dpx[i];
        dpr[i + 1] = dpr[i];
        dpc[i + 1] = dpc[i];
        dp[i + 1] = dp[i];
        if (c == 'I') {
            if (dpx[i] > 0) dpx[i + 1] = dpx[i] - 1, dpr[i + 1] = dpr[i] + (s - 1), dp[i + 1] = dp[i] + 1;
        }
        else if (c == 'E') {
            if (dpr[i] > 0) dpr[i + 1] = dpr[i] - 1, dp[i + 1] = dp[i] + 1;
            else if (dpc[i] > 0 && dpx[i] > 0) {
                dpc[i + 1] = dpc[i] - 1;
                dpx[i + 1] = dpx[i] - 1;
                dpr[i + 1] = dpr[i] + (s - 1);
                dp[i + 1] = dp[i] + 1;
            }
        }
        else if (c == 'A') {
            if (dpr[i] > 0) dpr[i + 1] = dpr[i] - 1, dp[i + 1] = dp[i] + 1, dpc[i + 1] = dpc[i] + 1;
            else if (dpx[i] > 0) dpx[i + 1] = dpx[i] - 1, dpr[i + 1] = dpr[i] + (s - 1), dp[i + 1] = dp[i] + 1;
        }
    }
    cout << dp[n] << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}