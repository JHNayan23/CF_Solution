#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    if (n == 2) return void (cout << -1 << endl); 
    if (n == 1) return void (cout << 1 << endl);
    int bal = 6;
    cout << "1 2" << ' ';
    for (int i = 0; i + 2 < n; i++) cout << bal / 2 << ' ', bal *= 2; cout << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}