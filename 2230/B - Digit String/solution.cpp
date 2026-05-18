#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    string s; cin >> s;
    int A = 0, B = 0, C = 0, D = 0, n = s.size();
    for (auto c : s) A += (c == '1' || c == '3');
    for (int i = 0; i <= n; i++) {
        D = max(D, B + A - C);
        if (i < n) B += (s[i] == '2'), C += (s[i] == '1' || s[i] == '3');
    }
    cout << n - D << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}