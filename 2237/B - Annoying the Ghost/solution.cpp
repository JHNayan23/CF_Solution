#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n), b(n), c(n);
    for (auto &i : a) cin >> i;
    set<int> s;
    for (auto &i : b) {
        cin >> i;
        s.insert(i);
    }
    for (int i = 0; i < n; i++) {
        auto it = s.lower_bound(a[i]);
        if (it == s.end()) {
            cout << -1 << '
';
            return;
        }
        c[i] = *it;
        s.erase(it);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (c[i] > c[j]) ans++;
        }
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