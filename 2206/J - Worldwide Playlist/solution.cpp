#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
int n, d;
vector<int> a, b, pa, pb;
int k = 0;
 
int getk(int i) {
    if (i < 1 or i >= n) return 0;
    return (pa[b[i + 1]] < pa[b[i]]) ? 1 : 0;
}
 
void solve() 
{
    cin >> n >> d;
    k = 0;
    a.resize(n + 1, 0);
    b.resize(n + 1, 0);
    pa.resize(n + 1, 0);
    pb.resize(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i], pa[a[i]] = i;
    for (int i = 1; i <= n; i++) cin >> b[i], pb[b[i]] = i;
    for (int i = 1; i < n; i++) k += getk(i);
 
    // total skip = pos[b1] - 1 + E (pos[bi + 1] - pos[bi] - 1) - n x i
    cout << pa[b[n]] - n + k * n << '
';
    for (int i = 2; i <= d; i++) {
        int c, x, y; cin >> c >> x >> y;
        vector<int> af;
        if (c == 1) {
            int u = a[x], v = a[y];
            af = {pb[u] - 1, pb[u], pb[v] - 1, pb[v]};
            sort (all(af));
            af.erase(unique(all(af)), af.end());
            for (auto e : af) k -= getk(e);
            swap(a[x], a[y]);
            pa[u] = y;
            pa[v] = x;
            for (auto e : af) k += getk(e);
        }
        else if ( c == 2) {
            af = {x - 1, x, y - 1, y};
            sort (all(af));
            af.erase(unique(all(af)), af.end());
            for (auto e : af) k -= getk(e);
            swap(b[x], b[y]);
            pb[b[x]] = x;
            pb[b[y]] = y;
            for (auto e : af) k += getk(e);
        }
        int ans = pa[b[n]] - n + k * n;
        cout << ans << '
';
    }
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; //cin >> t;
    while (t--) solve();
    return 0;
}