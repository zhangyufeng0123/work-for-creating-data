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

ll c[1000][1000];
ll a[1000][1000], b[1000][1000];

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	int m, n, r;
	cin >> m >> r >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < r; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < n; j++) {
			cin >> b[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			c[i][j] = 0;
			for (int k = 0; k < r; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cout << c[i][0];
		for (int j = 1; j < n; j++) {
			cout << ' ' << c[i][j];
		}
		cout << endl;
	}
}