#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n, k; cin >> n >> k;
    vector<int> a(n), cnt(n + 2), sc(n + 3), ss(n + 3);
    for (auto &i : a) cin >> i;
    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && a[j] == a[i]) j++;
        int k = j - i;
        cnt[k]++;
        ss[k] += k;
        i = j;
    }
 
    for (int i = n; i >= 1; i--) 
        sc[i] = sc[i + 1] + cnt[i],
        ss[i] += ss[i + 1];
 
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (!cnt[i]) continue;
        int R = k - ss[i];
        if (R % sc[i] == 0 && R / sc[i] >= 1 - i) ans++;
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