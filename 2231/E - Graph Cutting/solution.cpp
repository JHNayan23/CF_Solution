#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n, d; cin >> n >> d;
    vector<vector<int>> G(n + 1);
    for (int i = 1, u, v; i < n; i++) {
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
 
    auto dfs = [&](auto &&self, int u, int p) -> vector<array<long long, 4>> {
        vector<array<int, 4>> dp = {{1, 1, 0, 0}};
        for (auto v : G[u]) {
            if (v == p) continue;
            auto dpv = self(self, v, u);
            vector<array<int, 4>> ndp(dp.size() + dpv.size());
            for (int i = 0; i < dp.size(); i++)  for (int j = 0; j < 4; j++) if (dp[i][j])
            for (int k = 0; k < dpv.size(); k++)
            for (int l = 0; l + j < 4; l++)
            if (dpv[k][l])
            ndp[i + k + (l == 2 or l == 1)][l + j] += 1LL * dp[i][j] * dpv[k][l];
            dp = ndp;
        }
        return dp;
    };
 
    auto ans = dfs(dfs, 1, 0);
    cout << (d - 1 < ans.size() ? ans[d - 1][3] : 0) << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}