#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    vector<pair<int,int>> g;
    for (int l = n; l; l--) {
        vector<pair<int,int>> ng = {{a[l], l}};
        for (auto [v, p] : g) {
            int d = gcd(v, ng.back().first);
            if (d != ng.back().first) ng.push_back({d, p});
        }
        g = ng;
        vector<pair<int,int>> s;
        for (int i = 1; i < g.size(); i++) {
            int G = g[i - 1].first;
            int x = a[g[i].second] % G, y = G - x;
            auto it = s.begin();
            while (it != s.end() && it->second > y) ++it;
            s.insert(it, {x, y});
            int mn = 2e18, mx = 0;
            for (auto [x, y] : s) {
                mn = min(mn, y + mx);
                mx = max(mx, x);
            }
            mn = min(mn, mx);
            int r = (i + 1 < g.size() ? g[i + 1].second : n + 1);
            ans += mn * (r - g[i].second);
        }
    }
    cout << ans << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}