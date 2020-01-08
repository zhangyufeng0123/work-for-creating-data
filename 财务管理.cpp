#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int maxn = (int) 10;
const int N = (int) 1e5 + 100;
int a[maxn][20], b[maxn][20], c[maxn][20];

char win[maxn][9] = {"abc1.in", "abc2.in", "abc3.in", "abc4.in", "abc5.in", "abc6.in", "abc7.in", "abc8.in", "abc9.in",
                     "abc10.in"};
char wout[maxn][10] = {"abc1.out", "abc2.out", "abc3.out", "abc4.out", "abc5.out", "abc6.out", "abc7.out", "abc8.out",
                       "abc9.out", "abc10.out"};

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
    double num[100];
    for (int i = 0; i < maxn; i++) {
        freopen(win[i], "w", stdout);

        for (int j = 0; j < 12; j++) {
            double e = rand() % 1000000;
            num[j] = e * 1.0 / 100;
            printf("%.2lf\n", num[j]);
        }

        fclose(stdout);
        freopen(wout[i], "w", stdout);

        double sum = 0;
        for(int j = 0; j < 12; j++){
            sum += num[j];
        }
        printf("%.2lf\n", 1.0 * sum / 12);

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
    double sum = 0, a;
    for (int i = 0; i < 12; i++) {
        cin >> a;
        sum += a;
    }
    printf("%.2lf\n", sum / 12.0);
}
