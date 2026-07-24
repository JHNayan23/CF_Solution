#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    int x = count(all(a), 1), y = count(all(b), 0);
    if (a == b) {
        cout << 0 << '
';
        return;
    }
    if (x == 0 or y == 0) {
        cout << -1 << '
';
        return;
    }
    int xx = 0;
    for (auto i = 0; i < n; i++) {
        if (a[i] == 1 and b[i] == 0) xx++;
    }
    cout << ((xx & 1) ? 1 : 2) << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}