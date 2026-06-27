#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n, d; cin >> n >> d;
    vector<int> a(n), p(3 * n + 1);
    for (auto &i : a) cin >> i;
    for (int i = 0; i < 3 * n; i++) p[i + 1] = p[i] + a[i % n];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int center = i + n;
        int FOV = (p[center] - p[center - d] + p[center + d + 1] - p[center + 1]);
        ans += max(0LL, 2 * d * a[i] - FOV);
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