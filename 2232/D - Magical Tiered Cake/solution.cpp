#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n + 1);
    bool balerflag = true;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] >= i) balerflag = false; 
    }
    if (!balerflag) {
        cout << "NO
";
        return; 
    }
    cout << "YES
";
    vector<int> pos(n + 1, 1);
    vector<tuple<int, int, int>> ans;
    
    auto yo = [&](auto &&self, int id, int dest) -> void {
        if (pos[id] == dest) return;
        int src = pos[id];
        int aux = 6 - src - dest;
        for (int i = id - 1; i >= 1; i--) {
            if (i > a[id]) self(self, i, aux);
            else self(self, i, src);
        }
        ans.push_back({id, src, dest});
        pos[id] = dest;
    };
    
    for (int i = n; i >= 1; i--) yo(yo, i, 3);
    cout << ans.size() << '
';
    for (auto [f, s, t] : ans) cout << f << ' ' << s << ' ' << t << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}