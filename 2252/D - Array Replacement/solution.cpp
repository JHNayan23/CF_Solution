#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n), diff;
    for (auto &i : a) cin >> i;
    for (int i = 1; i < n; i++) diff.push_back(a[i] - a[i - 1]);
    for (int len = 0; len < n - 1; ) {
        int r = len + 1;
        int par = abs(diff[len] % 2);
        while (r < n - 1 && ((diff[r] & 1) == (diff[len] & 1))) r++;
        sort(diff.begin() + len, diff.begin() + r);
        len = r;
    }
    vector<int> ans(n); ans[0] = a[0];
    for (int i = 0; i + 1 < n; i++) ans[i + 1] = ans[i] + diff[i];
    for (auto i : ans) cout << i << ' '; cout << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}