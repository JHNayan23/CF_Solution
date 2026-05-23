#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n + 1), ans;
    int x = 0, y = 0;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = n; i; i--) if ((x ? -a[i] : a[i]) > 0) ans.push_back(i), x ^= 1;
    cout << ans.size() << '
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