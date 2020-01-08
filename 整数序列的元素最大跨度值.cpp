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

        n = rand() % 1000 + 1;
        cout << n << endl;
        for (int j = 0; j < n; j++) {
            num[j] = rand() % 1000;
            printf("%d\n", num[j]);
        }

        fclose(stdout);
        freopen(wout[i], "w", stdout);

        int maxx = num[0], minn = num[0];
        for(int j = 1; j < n; j++){
            maxx = max(maxx, num[j]);
            minn = min(minn, num[j]);
        }
        printf("%d\n", maxx - minn);

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
    cin >> n;
    int ans = 0;
    int maxx = 0, minn = 1000;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        maxx = max(maxx, tmp);
        minn = min(minn, tmp);
    }
    cout << maxx - minn << endl;
}
