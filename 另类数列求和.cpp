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

        n = rand() % 9 + 1;
        m = rand() % 9;
        cout << n << endl << m << endl;

        fclose(stdout);
        freopen(wout[e], "w", stdout);

        int ans = 0, s = n;
        for(int i = 0; i < m; i++){
            ans += s;
            s = s * 10 + n;
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

typedef long long ll;

using namespace std;

int main(void) {
#ifdef ONLINE_JUDGE
#else
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif  

    int ans = 0;
    int m, n;
    cin >> m >> n;
    int s = m;
    for (int i = 0; i < n; i++) {
        ans += s;
        s = s * 10 + m;
    }
    cout << ans << endl;
}