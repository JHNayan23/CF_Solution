#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    map<int, int> mp;
    int sum = 0, mx1 = 0, mx2 = 0;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        sum += x;
        if (++mp[x] > mx1) mx1 = mp[x], mx2 = x;
    }
    int xxx = n - mx1 + 2;
    if (mx1 > xxx) sum -= (mx1 - xxx) * mx2;
    cout << sum << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}