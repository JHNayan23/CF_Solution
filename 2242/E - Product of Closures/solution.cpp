#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int l, r, n; cin >> l >> r >> n;
    vector<int> sex;
    vector<pair<int, int>> seg;
 
    // for (int b = 1; b <= 30; b++) {
    //     int L = max(l, 1LL << (b - 1));
    //     int R = min(r, (1LL << b) - 1);
    //     if (L <= R) seg.push_back({L, R});
    // }
 
    // for (int i = 1; i <= 30; i++) {
    //     int S = max(l, 1LL << (i - 1));
    //     int E = min(r, (1LL << i) - 1);
    //     if (S <= E) {
    //         sex.push_back(S);
    //         if (S + 1 <= E) sex.push_back(S + 1);
    //     }
    // }
    // sort(all(sex));
    // sex.erase(unique(all(sex)), sex.end());
 
    string ans(n, '2');
 
    // for (int i = 0; i < (int)sex.size(); i++) {
    //     for (int j = i + 1; j < (int)sex.size(); j++) {
    //         string st = "";
    //         map<int, vector<int>> mp;
    //         // for (int x = l; x <= r; x++)
    //         //     mp[32 - __builtin_clz(x)].push_back(x);
    //         int lx = 32 - __builtin_clz(sex[i]);
    //         int ly = 32 - __builtin_clz(sex[j]);
    //         for (int k = 0; k < n; k++) {
    //             int bx = (sex[i] >> (lx - 1 - k % lx)) & 1LL;
    //             int by = (sex[j] >> (ly - 1 - k % ly)) & 1LL;
    //             st += (bx & by) ? '1' : '0';
    //         }
    //         ans = min(ans, st);
    //     }
    // }
    // cout << ans << '
';
 
    auto yo = [&](int x, int lx, int y, int ly) {
        for (int k = 0; k < n; k++) {
            auto ch = ((x >> (lx - 1 - k % lx)) & (y >> (ly - 1 - k % ly)) & 1) ? '1' : '0';
            if (ans[0] == '2' || ch < ans[k]) {
                for (int m = (ans[0] == '2' ? 0 : k); m < n; m++)
                ans[m] = ((x >> (lx - 1 - m % lx)) & (y >> (ly - 1 - m % ly)) & 1) ? '1' : '0';
                return;
            }
            if (ch > ans[k]) return;
        }
    };
    for (int i = 1; i <= 30; i++) {
        int SS = max(l, 1LL << (i - 1)), EE = min(r, (1LL << i) - 1);
        if (SS <= EE) {
            seg.push_back({SS, i});
            if (SS < EE) {
                int b = 63 - __builtin_clzll(SS ^ EE);
                int V = (SS & EE) & ~((1LL << (b + 1)) - 1);
                yo(V, i, V, i);
            }
        }
    }
    for (int i = 0; i < seg.size(); i++)
        for (int j = i + 1; j < seg.size(); j++)
            yo(seg[i].first, seg[i].second, seg[j].first, seg[j].second);
    cout << ans << '
';
}
 
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}