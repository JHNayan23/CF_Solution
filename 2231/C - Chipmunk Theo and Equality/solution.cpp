#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
map<int, int> Orii_baba_re(int x) {
    map<int, int> mp;
    int s = 0;
    while (x > 2) mp[x] = s++, x = (x % 2 == 0) ? x / 2 : x + 1;
    mp[x] = s;
    mp[3 - x] = s + 1;
    return mp;
}
 
void solve() 
{
    int n; cin >> n;
    int v; cin >> v;
    map<int, int> mp;
    for (auto [f, s] : Orii_baba_re(v)) mp[f] = s;
    for (int i = 1; i < n; i++) { 
        int x; cin >> x;
        auto mpAgain = Orii_baba_re(x);
        map<int, int> mp2;
        for (auto [f, s] : mp) if (mpAgain.count(f)) mp2[f] = s + mpAgain[f];
        mp = move(mp2);
    }
    int ans = -0x3f3f3f3f; 
    for (auto [f, s] : mp) if (ans == -0x3f3f3f3f or s < ans) ans = s;
    cout << ans << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}