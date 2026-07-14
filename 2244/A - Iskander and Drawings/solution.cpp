#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    string s; cin >> s;
    int x = 0, mx = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '*') {
            mx = max(mx, x);
            x = 0;
            continue;
        }
        x++;
    }
    mx = max(mx, x);
    cout << (mx + 1) / 2 << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}