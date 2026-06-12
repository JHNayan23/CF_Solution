#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
const int N = 6005, M = 18005000; 
int a[N], st[N], pos[M];
bool vis[N];
 
void solve() 
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int cur = 0, ans = 0;
    for (int i = 1; i <= n; i++) {
        st[i] = cur;
        cur += n - i + 1;
    }
    fill(pos, pos + cur, 0);
    for (int l = 1; l <= n; l++) {
        int mn = a[l], mx = a[l], r = l;
        for (; r <= n; r++) {
            if (vis[a[r]]) break;
            vis[a[r]] = 1;
            mn = min(mn, a[r]);
            mx = max(mx, a[r]);
            int k = r - l + 1;
            if (mx - mn != k - 1) continue;
            int xxx = mn;
            if (xxx + k <= n - k + 1) {
                int p = pos[st[k] + (xxx + k) - 1];
                if (p && p + k - 1 < l) {
                    if (k > ans) ans = k;
                }
            }
            if (xxx - k >= 1) {
                int p = pos[st[k] + (xxx - k) - 1];
                if (p && p + k - 1 < l) {
                    if (k > ans) ans = k;
                }
            }
            auto &p = pos[st[k] + xxx - 1];
            if (!p) p = l;
        }
        for (int i = l; i < r; i++) vis[a[i]] = 0;
    }
    cout << ans << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}