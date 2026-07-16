#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n, c; cin >> n >> c;
    vector<int> p(n);
    long long ans = -n * c;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ans += x;
        p[i] = max(0LL, c - x);
    }
    sort(p.rbegin(), p.rend());
    for (int i = 0; i < n / 2; i++) ans += p[i];
    cout << ans << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}