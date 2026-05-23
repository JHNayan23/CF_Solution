#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
bool good(int x, vector<int> &a, vector<int> &b, int n) {
    int bal = 0, sal = 0, ls = -1;
    for (int i = 0; i < n; i++) {
        int xx = (a[i] >= x) + (b[i] >= x);
        if (xx == 1) continue;
        if (xx == 2) {
            sal++;
            ls = 2;
            continue;
        }
        if (ls == 0) continue;
        bal++;
        ls = 0;
        // if (xx == 1) continue;
        // if (xx == 0 and ls != 0) bal++, ls = 0;
        // else if (xx == 0 and ls == 0) sal++, ls = 2;
    }
    return sal > bal;
}
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    int mx = max(*max_element(all(a)), *max_element(all(b)));
 
    int L = 1, H = mx, ans = 1;
    while (L <= H) {
        int mid = L + (H - L) / 2;
        if (good(mid, a, b, n)) ans = mid, L = mid + 1;
        else H = mid - 1;
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