#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
int p[200005];
int b[200005];
 
void solve() 
{
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) { 
        cin >> p[i]; 
        p[i] += p[i - 1]; 
    }
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(b, b + m, greater<int>());
    int ans = p[n] - p[b[0]]; 
    for (int i = 0; i < m - 1; i++) ans += abs(p[b[i]] - p[b[i + 1]]);
    cout << ans + abs(p[b[m - 1]]) << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}