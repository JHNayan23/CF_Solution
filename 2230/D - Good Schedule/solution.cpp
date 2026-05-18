#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    int a[n + 1], b[n + 1];
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i <= n; ++i) cin >> b[i];
    vector<int> dp(n + 2, 0), R(n + 1, n), par(n + 2);
    iota(all(par), 0);
 
    auto fuck = [&](auto &self, int v) -> int {
        return v == par[v] ? v : par[v] = self(self, par[v]);
    };
 
    for (int i = 1; i <= n; ++i) {
        dp[0] = i;
        if (a[i] == b[i]) {
            int x = a[i];
            dp[x] = dp[x - 1];
        } 
        else {
            for (int xxx : {a[i], b[i]}) {
                int lm = dp[xxx], L_max = dp[xxx - 1];
                int cur = fuck(fuck, L_max);
                while (cur > lm) {
                    R[cur] = i - 1;
                    par[cur] = fuck(fuck, cur - 1);
                    cur = fuck(fuck, cur);
                }
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; ++i) if (R[i] >= i) ans += R[i] - i + 1;
    cout << ans << '
';
}
 
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}