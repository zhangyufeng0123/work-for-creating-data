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
ll a[1000000], b[1000000], c[1000000];

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

        n = rand() % 10000 + 1;
        cout << n << endl;
//        for(int i = 0; i < n; i++){
//            a[i] = rand() % 900000000 + 100000000;
//            if(i == n - 1){
//                cout << a[i] << endl;
//            }else{
//                cout << a[i] << ' ';
//            }
//        }

        fclose(stdout);
        freopen(wout[e], "w", stdout);

        memset(a, 0, sizeof(a));
        for (int i = 2; i <= n; i++) {
            for (int j = i; j <= n; j += i) {
                if (a[j] == 1) {
                    a[j] = 0;
                } else {
                    a[j] = 1;
                }
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i] == 0) {
                ans++;
            }
        }
        cout << ans << endl;

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
#include<ctime>
#include<cstring>

typedef long long ll;

using namespace std;

ll a[20005], b[10005];

int main(void) {
#ifdef ONLINE_JUDGE
#else
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif  

    int n, m;
    cin >> n;
    memset(a, 0, sizeof(a));
    for (int i = 2; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            if (a[j] == 1) {
                a[j] = 0;
            }
            else {
                a[j] = 1;
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) {
            ans++;
        }
    }
    cout << ans << endl;
}