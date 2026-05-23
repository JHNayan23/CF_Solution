#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    vector<int> b(n);
    for (auto &i : b) cin >> i;
    for (int i = 0; i < n; i++) if (a[i] > b[i]) swap(a[i], b[i]);
    cout << accumulate(all(b), 0LL) + *max_element(all(a)) << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}