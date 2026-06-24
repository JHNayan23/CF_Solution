#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n), b;
    for (auto &i : a) cin >> i;
    int ans = a[0], cur = a[0];
    for (int i = 1; i < n; i++) {
        if (cur > a[i]) cur += a[i];
        else cur = a[i];
        ans = max(ans, cur);
    }
    cout << ans << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}