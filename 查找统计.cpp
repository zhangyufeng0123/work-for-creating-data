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

	int m, n;
	cin >> n >> m;
	int tmp, ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		if (tmp == m) {
			ans++;
		}
	}
	cout << ans << endl;
}

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

        n = rand() % 1000 + 1;
        cout << n << endl;
        m = rand() % 100;
        cout << m << endl;
        for(int i = 0; i < n; i++){
            a[i] = rand() % 100;
            cout << a[i] << endl;
        }

        fclose(stdout);
        freopen(wout[e], "w", stdout);

        int ans = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == m){
                ans++;
            }
        }
        cout << ans << endl;

        fclose(stdout);
    }
}