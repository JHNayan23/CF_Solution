#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<int> st, vec;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
        if (s[i] == '(') st.push_back(i);
        else if (!st.empty()) p.push_back({st.back(), i}), st.pop_back();
    int first = n;
    while (!st.empty()) first = min(first, st.back()), st.pop_back();
    for (auto [f, s] : p) vec.push_back(s < first ? f : s);
    string ans (n, '0');
    for (int i = 0; i < min(k, (int)vec.size()); i++) ans[vec[i]] = '1';
    cout << ans << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}