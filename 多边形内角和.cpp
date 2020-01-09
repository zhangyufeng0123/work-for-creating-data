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
int num[1000000];
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

    int n;
    for (int i = 0; i < 10; i++) {
        freopen(win[i], "w", stdout);

        n = rand() % 10 + 3;
        cout << n << endl;
        a[0] = rand() % 270 + 1;
        cout << a[0];
        for (int j = 1; j < n - 1; j++) {
            a[j] = rand() % 270 +  1;
            cout << ' ' << a[j];
        }
        cout << endl;

        fclose(stdout);
        freopen(wout[i], "w", stdout);

        int sum = 0;
        for(int j = 0; j < n - 1; j++){
            sum += a[j];
        }
        sum = (n - 2) * 180 - sum;
        if(sum > 0 && sum < 360){
            cout << sum << endl;
        }else{
            i--;
        }

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
    for (int i = 0; i < n - 1; i++) {
        int tmp;
        cin >> tmp;
        ans += tmp;
    }
    cout << (n - 2) * 180 - ans << endl;
}
