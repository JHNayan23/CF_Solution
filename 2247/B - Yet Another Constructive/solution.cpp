#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n, k, m; cin >> n >> k >> m;
    if (k > m) {
        cout << "NO
";
        return;
    }
    cout << "YES
";
 
    int kk = k;
    int x = m - (k - 1);
    cout << x << ' ';
    n--;
    while (n--) cout << 1 << ' '; cout << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}