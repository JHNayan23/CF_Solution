#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    sort (all(a));
    int ans = n * a.back();
    int mex = 0;
    for (auto i : a) if (i == mex) mex++;
    for (int i = 0; i < n; i++) {
        ans += min(i, mex);
        if (i == mex - 1 and mex == a.back() + 1) ans++;
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