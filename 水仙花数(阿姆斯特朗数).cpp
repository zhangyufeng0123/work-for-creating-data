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

        n = rand() % 900 + 100;
        cout << n << endl;

        fclose(stdout);
        freopen(wout[e], "w", stdout);

        r = 0;
        for(int i = 100; i <= n; i++){
            m = i;
            int ans = 0;
            while(m > 0){
                int tmp = m % 10;
                ans += (tmp * tmp * tmp);
                m /= 10;
            }
            if(ans == i){
                r++;
            }
        }
        cout << r << endl;

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
    int m = 0;
    for (int i = 100; i <= n; i++) {
        int tmp = i;
        int s = 0;
        while (tmp > 0) {
            int e = tmp % 10;
            s += (e * e * e);
            tmp /= 10;
        }
        if (s == i) {
            m++;
        }
    }
    cout << m << endl;
}