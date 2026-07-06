#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x >= 3) a++;
        if (x >= 2) b++;
    }
    cout << ((a >= 1 or b >= 2) ? "YES
" : "NO
");
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}