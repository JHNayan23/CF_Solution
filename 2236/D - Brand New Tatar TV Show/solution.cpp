#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n, k; cin >> n >> k;
    vector<int> mp(n + 1, 0);
    vector<int> doubly;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    for (int i = 1; i <= n; i++)
    if (mp[i] > 0 && mp[i] % 2 == 0) {
        cout << "YES
";
        return;
    }
    for (int i = 1; i <= n; i++) if (mp[i] > 0) doubly.push_back(i);
    int m = doubly.size();
    int next = -1; 
    bool ok = false;
    for (int i = m - 1; i >= 0; --i) {
        if (next != -1 && doubly[next] - doubly[i] <= k) ok = true;
        else next = i; 
    }
    cout << (ok ? "YES
" : "NO
");
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}