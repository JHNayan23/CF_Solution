#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    string s; cin >> s;
    int cz = count(s.begin(), s.end(), '0');
    int c1 = n - cz, diff = cz - c1;
    if (abs(diff) > 2) {
        cout << -1 << '
';
        return;
    }
    auto yo = [&](char st) {
        int len = 0;
        char cur = st;
        for (char c : s) if (c == cur) len++, cur ^= 1;
        return len;
    };
    int a = yo('0'), b = yo('1');
    int ans = 0;
    for (int v : {-1, 0, 1}) {
        if (abs(diff - v) > 1) continue;
        if (v == 1) ans = max(ans, a - (a % 2 == 0));
        else if (v == -1) ans = max(ans, b - (b % 2 == 0));
        else ans = max({ans, a - (a & 1), b - (b & 1)});
    }
    cout << (ans ? n - ans : -1) << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}