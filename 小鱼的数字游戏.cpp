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
ll a[1000000], b[1000000], c[1000000];
const ll inf = pow(2,32);

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

        n = rand() % 99 + 1;
        //cout << n << endl;
        for(int i = 0; i < n; i++){
            a[i] = rand() % inf;
            cout << a[i] << ' ';
//            if(i == n - 1){
//                cout << a[i] << endl;
//            }else{
//                cout << a[i] << ' ';
//            }
        }
        cout << endl;

        fclose(stdout);
        freopen(wout[e], "w", stdout);

        for(int i = n - 1; i >= 0; i--){
            if(i == 0){
                cout << a[i] << endl;
            }else{
                cout << a[i] << ' ';
            }
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
#include<iomanip>
#include<ctime>
#include<cstring>

typedef long long ll;

using namespace std;

ll a[20005], b[10005];

int main(void) {
#ifdef ONLINE_JUDGE
#else
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif  

    int n = 0;
    for (;; n++) {
        cin >> a[n];
        if (a[n] == 0) {
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (i == 0) {
            cout << a[i] << endl;
        }
        else {
            cout << a[i] << ' ';
        }
    }
}