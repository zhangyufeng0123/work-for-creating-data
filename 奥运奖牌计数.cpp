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
int num[1000000];
int a[20], b[20], c[20];

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

    int n;
    for (int i = 0; i < 10; i++) {
        freopen(win[i], "w", stdout);

        n = rand() % 17 + 1;
        cout << n << endl;
        for (int j = 0; j < n; j++) {
            a[j] = rand() % 10;
            b[j] = rand() % 10;
            c[j] = rand() % 10;
            cout << a[j] << ' ' << b[j] << ' ' << c[j] << endl;
        }

        fclose(stdout);
        freopen(wout[i], "w", stdout);

        int aa = 0, bb = 0, cc = 0, sum = 0;
        for (int j = 0; j < n; j++) {
            aa += a[j];
            bb += b[j];
            cc += c[j];
        }
        cout << aa << ' ' << bb << ' ' << cc << ' ' << aa + bb + cc << endl;

        fclose(stdout);
    }
}

#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

using namespace std;

int main(void) {
#ifdef ONLINE_JUDGE
#else
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int ans = 0;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++) {
        int aa, bb, cc;
        cin >> aa >> bb >> cc;
        a += aa;
        b += bb;
        c += cc;
    }
    cout << a << ' ' << b << ' ' << c << ' '<< a + b + c << endl;
}
