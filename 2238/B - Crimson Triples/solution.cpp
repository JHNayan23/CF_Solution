    #include <bits/stdc++.h>
    using namespace std;
    #define int long long int
    #define all(x) x.begin(), x.end()
 
    void solve() 
    {
        int n; cin >> n;
        int ans = 0;
        for (int i = 1; i <= n; i++) ans += (n / i) * (n / i);
        cout << ans << '
';
    }
    int32_t main() {
        ios_base::sync_with_stdio(0); cin.tie(0);
        int t = 1; cin >> t;
        while (t--) solve();
        return 0;
    }