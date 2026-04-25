#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n);
    for (auto& i : a) cin >> i;
    //int sum = accumulate(all(a), 0LL);
    if (find(all(a), 100) == a.end())  cout << "NO
";
    else cout << "YES
";
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}