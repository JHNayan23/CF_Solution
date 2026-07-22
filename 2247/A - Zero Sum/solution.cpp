#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n);
    for (auto &e : a) cin >> e;
    int sm = abs(accumulate(all(a), 0LL));
    int x = count(all(a), 1);
    int y = count(all(a), -1);
    if (n == 1) {
        cout << "NO
";
        return;
    }
    if (n == 2 and (a.front() == a.back())) {
        cout << "NO
";
        return;
    }
    int xx = abs(x - y);
    if (sm % 4 == 0) cout << "YES
";
    else cout << "NO
";
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}