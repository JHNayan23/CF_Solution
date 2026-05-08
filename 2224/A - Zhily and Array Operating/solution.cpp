#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n);
    int ans = 0;
    for (auto &i : a) cin >> i;
    for (int i = n - 2; i >= 0; i--) if (a[i + 1] > 0) a[i] += a[i + 1];
    for (auto i : a) ans += (i > 0);
    cout << ans << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}