#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n, q;
    string s;
    cin >> n >> q >> s;
    vector<int> p(n, 0);
    for (int i = 1; i < n; i++) {
        p[i] = p[i - 1] + (s[i] == s[i - 1]);
    }
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        int c = p[r - 1] - p[l - 1];
        cout << ((c + 1) / 2 <= k ? "YES
" : "NO
");
    }
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}