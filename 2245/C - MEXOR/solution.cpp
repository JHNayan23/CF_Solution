#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
int yo (int x) {
    if (x % 4 == 0) return x;
    if (x % 4 == 1) return 1;
    if (x % 4 == 2) return x + 1;
    return 0;
}
 
void solve() 
{
    int n, k; cin >> n >> k;
    if (n == 1) {
        if (k == 1) cout << "YES
0
";
        else cout << "NO
";
        return;
    }
    int get = yo(n);
    int kk = k ^ get;
    int mx = 31 - __builtin_clz(n - 1);
    int mxv = (1LL << (mx + 1)) - 1;
    if (kk > mxv) {
        cout << "NO
";
        return;
    } 
    vector<int> v;
    vector<bool> ok (n, false);
    for (int bit = 0; bit <= mx; bit++) { 
        if ((kk >> bit) & 1LL) {
            v.push_back(1LL << bit);
            ok[1LL << bit] = true;
        }
    }
    cout << "YES
";
    for (auto x : v) cout << x << ' '; 
    cout << 0 << ' ';
    for (int i = 1; i < n; i++) if (!ok[i]) cout << i << ' ';
    cout << '
';
}
 
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}