#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n);
    for (auto & i : a) cin >> i;
    int x = INT_MAX, y = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (i & 1) y = max(y, a[i]);
        else x = min(x, a[i]);
    }
    cout << ((n % 2 == 0 && x - 1 > y) ? "YES
" : "NO
");
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}