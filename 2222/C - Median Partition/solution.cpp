#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    for (auto& i : a) cin >> i, mp[i]++;
    auto fuck = a;
    sort(all(fuck));
    auto med = fuck[n / 2];
    vector<int> t1(n + 1, 0), t2(n + 1, 0);
    for (int i = 0; i < n; i++) { 
        if (a[i] >= med) t1[i + 1] = t1[i] + 1; 
        else t1[i + 1] = t1[i] - 1; 
        if (a[i] <= med) t2[i + 1] = t2[i] + 1; 
        else t2[i + 1] = t2[i] - 1; 
    }
    vector<int> dp(n + 1, -1e18);
    dp[0] = 0;
    for (int i = 0; i <= n; i++)
    if (dp[i] != -1e18) {
        for (int j = 1; i + j <= n; j += 2) {
            int xxx = i + j;
            if ((t1[xxx] - t1[i]) > 0 && (t2[xxx] - t2[i]) > 0)
                dp[xxx] = max(dp[xxx], dp[i] + 1);
        }
    }
    cout << max(1LL, dp[n]) << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}