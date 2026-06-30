#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int x; cin >> x;
    string s = to_string(x);
    int L = s.size();
    int p = 1;
    for (int i = 0; i < L; i++) p *= 10;
    int y = p + 1;
    cout << y << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}