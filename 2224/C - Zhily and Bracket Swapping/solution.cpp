#include <bits/stdc++.h>
using namespace std;
#define সংখ্যা long long int
#define সব(x) x.begin(), x.end()
#define যদি if
#define সমান_না !=
#define সমান_সমান ==
#define নাহলে else
#define ছোট_বা_সমান <=
#define ছোট <
#define অথবা or
#define এন n
#define মাতৃভাষায় void
#define এ a
#define বি b
#define সমাধান solve()
#define আসল int32_t main()
#define গতি_বাড়ালাম ios_base::sync_with_stdio(0); cin.tie(0)
#define অক্ষরের_ক্রম string
#define a_এর_সব_খোলা count(সব(a), '(')
#define সমান =
#define নিলাম cin >>
#define b_এর_সব_খোলা count(সব(b), '(')
#define n_পর্যন্ত for (int i = 0; i < n; i++)
#define t_পর্যন্ত while (t কমবে)
#define হবে cout << "YES
"
#define হবে_না cout << "NO
"
#define মোট_খোলা total_khola
#define ফিরে_যাও return
#define শূন্য 0
#define শূন্যর_থেকে 0
#define বাড়বে ++
#define কমবে --
 
 
 
 
 
 
 
 
মাতৃভাষায় সমাধান
{
    সংখ্যা n; নিলাম n;
    অক্ষরের_ক্রম a, b; নিলাম a >> b;
    সংখ্যা মোট_খোলা সমান a_এর_সব_খোলা + b_এর_সব_খোলা;
    যদি (মোট_খোলা সমান_না n) {
        হবে_না;
        ফিরে_যাও;
    }
    সংখ্যা a_তে = শূন্য, b_তে = শূন্য;
    n_পর্যন্ত {
        যদি (a[i] সমান_সমান b[i]) {
            যদি (a[i] সমান_সমান '(') a_তে বাড়বে, b_তে বাড়বে;
            নাহলে a_তে কমবে, b_তে কমবে;
        }
        নাহলে {
            যদি (a_তে ছোট_বা_সমান b_তে) a_তে বাড়বে, b_তে কমবে;
            নাহলে a_তে কমবে, b_তে বাড়বে;
        }
        যদি (a_তে ছোট শূন্যর_থেকে অথবা b_তে ছোট শূন্যর_থেকে) {
            হবে_না;
            ফিরে_যাও;
        }
    }
    হবে;
}
 
 
 
 
 
 
 
 
 
আসল {
    গতি_বাড়ালাম;
    সংখ্যা t = 1; নিলাম t;
    t_পর্যন্ত সমাধান;
    ফিরে_যাও শূন্য;
}