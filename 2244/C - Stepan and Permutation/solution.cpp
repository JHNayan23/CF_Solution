#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n, x, y; cin >> n >> x >> y;
    vector<int> p(n);
    for (auto &i : p) cin >> i;
    int g = gcd(x, y);
    for (int i = 0; i < n; i++) {
        int x = i;
        int y = p[i] - 1; 
        if (x % g != y % g) {
            cout << "NO
";
            return;
        }
    }
    cout << "YES
";
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}