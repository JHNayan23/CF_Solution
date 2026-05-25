#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n + 1), pre(n + 1, 0);
    int mx = 0;
    for (int i = 1; i <= n; i++) cin >> a[i], pre[i] = pre[i - 1] + abs(a[i]), mx += a[i];
    int optimal = 0;
    int suff = 0;
    for (int k = n; k >= 1; k--) {
        if (a[k] > 0 && pre[k - 1] - a[k] + suff > mx) {
            mx = pre[k - 1] - a[k] + suff;
            optimal = k;
        }
        suff += a[k];
    }
    if (!optimal) return cout << "0

", void();
    vector<int> ops;
    for (int i = 1; i <= optimal; i++) if (i == optimal || (i == optimal - 1 ? a[i] > 0 : (a[i] <= 0) != (a[i + 1] <= 0))) ops.push_back(i);
 
    reverse(all(ops));
    int m = ops.size(), left = 0, right = m - 1;
    vector<int> ans(m);
    bool ff = false;
    for (int i = 0; i < m; i++) {
        if (i + 1 < m && (a[ops[i + 1]] > 0) != ff) ans[right--] = ops[i];
        else ans[left++] = ops[i], ff = !ff;
    }
    cout << m << '
';
    for (auto i : ans) cout << i << ' '; cout << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}