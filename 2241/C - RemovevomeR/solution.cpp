#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    string s; cin >> s;
    vector<int> a, b;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') a.push_back(i);
        else b.push_back(i);
    }
    //for (auto e : a) cout << e << ' '; cout << endl;
    //for (auto e : b) cout << e << ' '; cout << endl;
    sort(all(a));
    sort(all(b));
    // for (auto e : a) cout << e << ' '; cout << endl;
    // for (auto e : b) cout << e << ' '; cout << endl;
    if (a.empty() or b.empty()) {
        cout << 1 << endl;
        return;
    }
     if ((a.back() < b.front()) or (b.back() < a.front())) cout << 2 << endl;
     else cout << 1 << endl;
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}