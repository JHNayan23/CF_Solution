#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
const int MOD = 1e9 + 7;
 
long long pw(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}
 
void solve(){
    int n; cin >> n;
    int cnt = 0;
    vector<int> v;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        if (x == -1) cnt++;
        else if (v.empty() or v.back() != x) v.push_back(x); 
    }
    int len = v.size(), p = 0;
    for (int i = 0; i + 1 < len; i++) {
        if (v[i + 1] == v[i] + 1) p++;  
    }
    int ans = 0;
    if (cnt) {
        ans = pw(2, n - len - 1) * (1 + p) % MOD;
    }
    else ans = pw(2, n - len);
    cout << ans << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}