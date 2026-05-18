#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(x) x.begin(), x.end()
 
void solve() 
{
    int n; cin >> n;
    int ah = 0, uh = 0, yeah = 0, ohno = 0, ohyeah = 0;
    while (n--) {
        int x; cin >> x;
        if (x == 1) ah++;
        else if (x > 1) uh++, yeah += x, ohno += (x - 2) / 2, ohyeah = x;
    }
    if (!uh) return void(cout << "0
");
    if (uh == 1) return void(cout << (ohyeah == 2 ? (ah ? 3 : 0) : ohyeah + min(ah, ohyeah / 2)) << '
');
    cout << yeah + min(ah, ohno) << '
';
}
 
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; cin >> t;
    while (t--) solve();
    return 0;
}