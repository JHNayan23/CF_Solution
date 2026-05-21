#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    int a[n];
    int bal = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 0) bal = max(bal, a[i - 1] - a[i]);
    }
    
 
    bool yo1 = true, yo2 = false;
    for (int i = 0; i + 1 < n; i++) {
        bool F1 = (yo1 and a[i] <= a[i + 1]) or (yo2 and a[i] + bal <= a[i + 1]);
        bool F2 = (yo1 and a[i] <= a[i + 1] + bal) or (yo2 and a[i] <= a[i + 1]);
        yo1 = F1; yo2 = F2;
    }
    cout << (yo1 or yo2 ? "YES
" : "NO
");
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}