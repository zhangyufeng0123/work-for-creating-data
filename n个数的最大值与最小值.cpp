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

        n = rand() % 100;
        a[0] = rand() % 100;
        cout << a[0];
        for(int i = 1; i < n; i++){
            a[i] = rand() % 100;
            cout << ' ' << a[i];
        }
        cout << -1 << endl;

        fclose(stdout);
        freopen(wout[e], "w", stdout);

        int minn = 100, maxx = 0;
        for(int i = 0; i < n; i++){
            minn = min(minn, a[i]);
            maxx = max(maxx, a[i]);
        }
        cout << maxx << ' ' << minn << endl;

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

    int maxx = 0, minn = 0;
    int n, flag = 0;
    while(cin >> n && n != -1) {
        if (!flag) {
            flag = 1;
            minn = n;
            maxx = n;
        }
        else {
            maxx = max(maxx, n);
            minn = min(minn, n);
        }
    }
    if (!flag) {
        cout << 0 << ' ' << 0 << endl;
    }
    else {
        cout << maxx << ' ' << minn << endl;
    }
}