#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
static const long long MOD = 998244353;
 
long long yo(long long a, long long e) {
    long long r = 1;
    while (e) {
        if (e & 1) r = r * a % MOD;
        a = a * a % MOD;
        e >>= 1;
    }
    return r;
}
 
 
void solve() 
{
    int n, m; cin >> n >> m;
    int r, c; cin >> r >> c;
    int dimension = n * m - (n - r + 1) * (m - c + 1);
    cout << yo(2, dimension) << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}