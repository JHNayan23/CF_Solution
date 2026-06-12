#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int a, b, x; cin >> a >> b >> x;
    vector<int> ap, bp;
    ap.push_back(a); bp.push_back(b);
    while (a) a /= x, ap.push_back(a);
    while (b) b /= x, bp.push_back(b); 
    int ans = 1e18;
    for (int i = 0; i < ap.size(); i++) 
        for (int j = 0; j < bp.size(); j++) {
            int diff = abs(ap[i] - bp[j]);
            ans = min(ans, i + j + diff); 
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