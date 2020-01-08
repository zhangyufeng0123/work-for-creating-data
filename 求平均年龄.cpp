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

    int T[16];
    int n;
    for (int i = 0; i < maxn; i++) {
        freopen(win[i], "w", stdout);
        n = rand() % 100 + 1;
        cout << n << endl;
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 11 + 15;
            cout << a[i][j] << endl;
        }
        fclose(stdout);

        freopen(wout[i], "w", stdout);
        int e = 0;
        for (int j = 0; j < n; j++) {
            e += a[i][j];
        }
        printf("%.2lf\n", 1.0 * e / n);
        fclose(stdout);
    }
}