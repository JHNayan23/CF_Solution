#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n), p(n);
    for (auto &i : a) cin >> i;
    int X = 0; X = count(all(a), 0);
    int Y = 0; Y = count(all(a), 1);
    int Z = 0; Z = count(all(a), 2);
    int ans = 0;
    int cnt = min(Y, Z);
    ans += X;
    ans += cnt;
    ans += (Y - cnt) / 3;
    ans += (Z - cnt) / 3;
    cout << ans << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}