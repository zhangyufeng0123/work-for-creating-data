#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

const int maxn = (int) 10;
const int N = (int) 1e5 + 100;
int a[maxn][2000000], b[maxn][20], c[maxn][20];

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

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    srand(time(NULL));

    int T[16];

    for (int i = 0; i < maxn; i++) {
        freopen(win[i], "w", stdout);
        if (!i) {
            cout << -1 << endl;
        } else {
            int e = rand() % 10000;
            for (int j = 0; j < e; j++) {
                a[i][j] = rand() % 32768;
                cout << a[i][j] << ' ';
            }
            if(i % 2){
                a[i][e] = -1;
                cout << -1 << endl;
            }else{
                a[i][e] = 3543541;
                cout << 3543541 << endl;
            }
        }
        fclose(stdout);
    }

    for (int i = 0; i < maxn; i++) {
        freopen(wout[i], "w", stdout);
        if(i == 0){
            cout << 0 << ' ' << 0 << endl;
        }else{
            int maxx = a[i][0], minn = a[i][0];
            for(int j = 0; ;j++){
                if(a[i][j] > 32767 || a[i][j] < 0){
                    break;
                }
                maxx = max(maxx, a[i][j]);
                minn = min(minn, a[i][j]);
            }
            cout << maxx << ' ' << minn << endl;
        }
        fclose(stdout);
    }
}