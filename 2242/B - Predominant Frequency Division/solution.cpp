#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    int x = 0, y = 0, c = 0;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    int mn = 1e9;
    bool ok = false;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == 1) x += 1, y += 1;
        else if (a[i] == 2) x -= 1, y += 1;
        else x -= 1, y -= 1;
 
        if (y >= mn) ok = true;
 
        if (i <= n - 3 and x >= 0) mn = min(mn, y);
    }
    cout << (ok ? "YES
" : "NO
");
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}