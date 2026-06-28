#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
const int N = 1e6;
int spf[N + 5];
 
void sieve() {
    for (int i = 1; i <= N; i++) spf[i] = i;
    for (int i = 2; i * i <= N; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= N; j += i) if (spf[j] == j) spf[j] = i;
        }
    }
}
 
void solve() 
{
    int n; cin >> n;
    int tot = 0, dist = 0;
    int x = n;
    while (x > 1) {
        int p = spf[x];
        dist++;
 
        while (x % p == 0) tot++, x /= p;
    }
    int ans = tot + dist;
    cout << ans - 1 << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    sieve();
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}