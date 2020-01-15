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
int a[120], b[120], c[120];

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

    int n, m, r;
    for (int e = 0; e < 4; e++) {
        freopen(win[e], "w", stdout);

        n = rand() % 50 + 1;
        cout << n << endl;

        fclose(stdout);
        freopen(wout[e], "w", stdout);

        int sum = 0;
        int t1 = 1, t2 = 1;
        for (int i = 0; i < n; i++) {
            sum += t1;
            t1 += t2;
            t2++;
        }
        cout << sum << endl;
        
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

using namespace std;

int main(void) {
#ifdef ONLINE_JUDGE
#else
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif  

    int n;
    cin >> n;
    int sum = 0;
    int t1 = 1, t2 = 1;
    for (int i = 0; i < n; i++) {
        sum += t1;
        t1 += t2;
        t2++;
    }
    cout << sum << endl;
}