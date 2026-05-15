#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n), vis(n), pos(k);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    map<int, int> mp;
    for (int i = 0; i < k; i++) {
        pos[i] = a[i];
        for (int j = i + k; j < n; j += k) if (pos[i] != a[j]) pos[i] = -1;
        if (pos[i] != -1) mp[pos[i]]++;
        if (pos[i] == -1) {
            for (int j = i; j < n; j += k) {
                if (b[j] != -1 and b[j] != a[j]) {
                    cout << "NO
";
                    return;
                }
            }
        }
    }
    map<int, int> mp2;
    for (int i = 0; i < k; i++) {
        if (pos[i] != -1) {
            set<int> st;
            for (int j = i; j < n; j += k) st.insert(b[j]);
            st.erase(-1);
            if (st.size() >= 2) {
                for (int j = i; j < n; j += k) 
                if (b[j] != -1 and b[j] != a[j]) {
                    cout << "NO
";
                    return;
                }
            }
            if (st.size() == 1) mp2[*st.begin()]++;
        }
    }
    for (auto [f, s] : mp2) {
        if (s > mp[f]) {
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