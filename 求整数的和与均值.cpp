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
int num[1000000];
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

        n = rand() % 10000 + 1;
        cout << n << endl;
        for (int j = 0; j < n; j++) {
            num[j] = rand() % 10000;
            printf("%d\n", num[j]);
        }

        fclose(stdout);
        freopen(wout[i], "w", stdout);

        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += num[j];
        }
        printf("%d %.5lf\n", sum, 1.0 * sum / n);

        fclose(stdout);
    }
}