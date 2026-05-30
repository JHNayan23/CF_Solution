#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    int tot = 0;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        tot += a[i];
        int req = tot / (i + 1);
        ans = min(ans, req);
        cout << ans << ' ';
    }
    cout << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}