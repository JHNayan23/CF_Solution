#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n);
    for (auto& i : a) cin >> i;
    vector<int> pre(n, 0), ind(n), ans(n);
    iota(all(ind), 0LL);
    partial_sum(all(a) - 1, pre.begin() + 1);
    sort(all(ind), [&](int x, int y) { return pre[x] < pre[y]; });
    for (int i = 0; i < n; i++) ans[ind[i]] = n - i;
    for (auto i : ans) cout << i << ' '; cout << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}