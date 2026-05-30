#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n, x, s; cin >> n >> x >> s;
    string ss; cin >> ss;
 
    vector<int> dp(x + 1, -1);
    dp[0] = 0;
    for (auto c : ss) {
        if (c == 'I') {
            for (int j = x - 1; j >= 0; j--) if (dp[j] != -1) dp[j + 1] = max(dp[j] + 1, dp[j + 1]);
        }
        else if (c == 'E') {
            for (int j = 0; j <= x; j++) if (dp[j] != -1 and dp[j] < j * s) dp[j]++;
        }
        else if (c == 'A') {
            vector<int> ndp = dp;
            for (int j = 0; j <= x; j++) {
                if (dp[j] != -1) {
                    //opt 1 oshunno table
                    if (dp[j] < j * s) ndp[j] = max(ndp[j], dp[j] + 1);
                    //opt2 khali table
                    if (j < x) ndp[j + 1] = max(ndp[j + 1], dp[j] + 1);
                }
            }
            dp = ndp;
        }
    }
    cout << *max_element(all(dp)) << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}