#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int maxn = (int) 10;
const int N = (int) 1e5 + 100;

char win[maxn][9] = {"abc1.in", "abc2.in", "abc3.in", "abc4.in", "abc5.in", "abc6.in", "abc7.in", "abc8.in", "abc9.in",
                     "abc10.in"};
char wout[maxn][10] = {"abc1.out", "abc2.out", "abc3.out", "abc4.out", "abc5.out", "abc6.out", "abc7.out", "abc8.out",
                       "abc9.out", "abc10.out"};
int a[1000000], b[1000000], c[1000000];

int main(void) {
//
//#ifdef ACM_LOCAL
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
//#endif

//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);

    srand(time(NULL));

    ll n, m, r;
    for (int e = 0; e < 4; e++) {
        freopen(win[e], "w", stdout);

        n = rand() % 1000000000000000;
        cout << n << endl;

        fclose(stdout);
        freopen(wout[e], "w", stdout);

        cout << n << endl;
        while (n > 9) {
            ll s = 1;
            ll flag = 0;
            while (n > 0) {
                ll t = n % 10;
                n /= 10;
                if (t == 0) {
                    continue;
                } else {
                    s = s * t;
                    flag = 1;
                }
            }
            if (s == 1 && !flag) {
                n = 0;
            } else
                n = s;
            cout << n << endl;
        }

        fclose(stdout);
    }
}



#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<iomanip>

typedef long long ll;

using namespace std;

int main(void) {
#ifdef ONLINE_JUDGE
#else
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif  

    ll n;
    cin >> n;
    cout << n << endl;
    while (n > 9) {
        ll s = 1, flag = 1;
        while (n > 0) {
            ll t = n % 10;
            n /= 10;
            if (t) {
                s *= t;
                flag = 0;
            }
        }
        if (s == 1 && flag) {
            n = 0;
        }
        else {
            n = s;
        }
        cout << n << endl;
    }
}