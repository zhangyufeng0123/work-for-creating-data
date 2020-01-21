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

        n = rand() % 299 + 2;
        cout << n << endl;
        for (int i = 0; i < n; i++) {
            a[i] = rand() % 10000000;
            cout << fixed << setprecision(1) << a[i] * 1.0 / 10 << endl;
        }

        fclose(stdout);
        freopen(wout[e], "w", stdout);

        int sum = a[0], minn = a[0], maxx = a[0];
        for (int i = 1; i < n; i++) {
            sum += a[i];
            minn = min(minn, a[i]);
            maxx = max(maxx, a[i]);
        }
        cout << fixed << setprecision(1) << (sum - maxx - minn) * 1.0 / ((n - 2) * 10) << ' ';
        int ans, flag = 0;
        for(int i = 0; i < )

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

int main(void) {
#ifdef ONLINE_JUDGE
#else
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif  

    int n;
    cin >> n;
    double a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    double sum = a[0], minn = a[0], maxx = a[0];
    for (int i = 1; i < n; i++) {
        sum += a[i];
        minn = min(minn, a[i]);
        maxx = max(maxx, a[i]);
    }
    double avg = sum - maxx - minn;
    avg /= (n - 2);
    cout << fixed << setprecision(1) << avg << ' ';
    double ans = 0;
    int flag1 = 0, flag2 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == minn && !flag1) {
            flag1 = 1;
            continue;
        }
        else if (a[i] == maxx && !flag2) {
            flag2 = 1;
            continue;
        }
        ans = max(ans, abs(avg - a[i]));
    }
    cout << fixed << setprecision(1) << ans << endl;
}