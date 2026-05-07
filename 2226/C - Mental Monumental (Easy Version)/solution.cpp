#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
bool good (int mid, multiset<int> s) {
    for (int i = mid; i >= 0; i--) {
        if (s.find(i) != s.end()) {
            s.erase(s.find(i));
            continue;
        }
        auto x = s.lower_bound(2 * i + 1);
        if (x == s.end()) return false;
        s.erase(s.find(*x));
    }
    return true;
}
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    multiset<int> s(all(a));
    int L = 0, H = n + 1, ans = 1;
    while (L <= H) {
        int mid = (L + H) / 2;
        if (good(mid, s)) ans = mid, L = mid + 1;
        else H = mid - 1;
    }
    ans++;
    cout << ans << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}