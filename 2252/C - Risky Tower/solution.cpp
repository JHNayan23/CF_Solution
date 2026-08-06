#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
bool yo(int x, vector<int> &a, vector<vector<int>> &v) {
    vector<int> st;
    st.reserve(x + v[0].size()); 
    for (int i = v.size() - 1; i >= 0; i--) {
        st.insert(st.end(), v[i].begin(), v[i].end());
        if (st.size() > x) sort(st.begin(), st.end(), greater<int>()), st.resize(x);
        int sum = 0;
        for (auto x : st) sum += x;
        if (sum >= a[i]) return 1;
    }
    return 0;
}
 
void solve() 
{
    int n, m; cin >> n >> m;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    vector<vector<int>> v(n, vector<int>(m));
    for (auto &i : v)
     for (auto &j : i) 
      cin >> j;
    
    int lo = 1, hi = m, ans = m;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (yo (mid, a, v)) ans = mid, hi = mid - 1;
        else lo = mid + 1;
    }
    cout << ans << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}