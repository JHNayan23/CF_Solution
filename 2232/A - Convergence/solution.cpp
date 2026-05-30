#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    auto b = a;
    sort(b.begin(), b.end());
    int ans = n + 1;
    for (auto x : a) {
        int L = lower_bound(b.begin(), b.end(), x) - b.begin();
        int R = b.end() - upper_bound(b.begin(), b.end(), x);
        ans = min(ans, max(L, R));
    }
    cout << (ans == n + 1 ? 0 : ans) << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}