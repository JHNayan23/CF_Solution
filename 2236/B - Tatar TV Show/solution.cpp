#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<int> a(k, 0);
    for (int i = 0; i < n; i++) if (s[i] == '1') a[i % k]++;
    //for (int i = 0; i < n; i++) if (s[i] == '1') a.push_back(i);
    for (int i = 0; i < k; i++) {
        if (a[i] & 1) {
            cout << "NO
";
            return;
        }
    }
    cout << "YES
";
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}