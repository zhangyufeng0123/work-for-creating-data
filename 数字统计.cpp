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

    int n, m, r;
    for (int e = 0; e < 4; e++) {
        freopen(win[e], "w", stdout);

        n = rand() % 1000;
        m = rand() % 1000;
        if(n < m){
            swap(n, m);
        }
        cout << m << ' ' << n << endl;

        fclose(stdout);
        freopen(wout[e], "w", stdout);

        int ans = 0;
        for(int i = m; i <= n; i++){
            r = i;
            while(r > 0){
                int tmp = r % 10;
                if(tmp == 2){
                    ans++;
                }
                r /= 10;
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
    for (int i = m; i <= n; i++) {
        int tmp = i;
        while (tmp > 0) {
            int t = tmp % 10;
            if (t == 2) {
                ans++;
            }
            tmp /= 10;
        }
    }
    cout << ans << endl;
}