#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
int dp[31][4][4];
 
void digital_playground_dp() {
    //k = 0
    for (int i = 0; i < 4; i++) for (int j = 0; j < 4; j++) dp[0][i][j] = (i == 2) + (j == 2);
    for (int k = 1; k <= 30; k++)
    for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++) {
        int mid = i ^ j;
        //left + right - overlap
        dp[k][i][j] = dp[k - 1][i][mid] + dp[k - 1][mid][j] - (mid == 2);
    }
}
 
void solve() 
{
    int n, k; cin >> n >> k;
    string s, z; cin >> s >> z;
    int c[4]{};
    for (int i = 0; i < n; i++) c[(s[i] - '0') * 2 + (z[i] - '0')]++;
    int ans = 0;
    for (int i = 0; i < 4; i++) 
    for (int j = 0; j < 4; j++) {
        if (c[i] != 0 and c[j] != 0)  {
            int a = (i / 2) * 2 + (j / 2);
            int b = (i % 2) * 2 + (j % 2);
            int p = c[i] * c[j];
            ans += p * dp[k][a][b];
        }
    }
    cout << ans << '
';
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    digital_playground_dp();
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}