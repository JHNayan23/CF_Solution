#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
const int mod = 1e9 + 7, N = 500005;
int spf[N], tot[N];
 
void sv() {
    for (int i = 1; i < N; i++) spf[i] = i;
    for (int i = 2; i * i < N; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < N; j += i) {
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}
 
void solve() 
{
    int n, x; cin >> n >> x;
    vector<int> a(n), primes;
    for (auto &e : a) cin >> e;
    for (int i = 0; i < n; i++) {
        int xx = a[i];
        while (xx > 1) { 
            int p = spf[xx];
            int cnt = 0;
            while (xx % p == 0) cnt++, xx /= p;
            if (tot[p] == 0) primes.push_back(p);
            tot[p] += cnt;
        }
    }
    int ans = 1;
    for (auto e : primes) {
        int way = (tot[e] + 1) % mod;
        ans = (ans * way) % mod;
        tot[e] = 0;
    }
    cout << ans << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    sv();
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}