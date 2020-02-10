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
int fx[8] = { 0, 1, 0, -1, 1, -1, 1, -1 };
int fy[8] = { 1, 0, -1, 0, 1, -1, -1, 1 };

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	int m, n;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	if (m <= 2 || n <= 2) {
		for (int i = 1; i <= n; i++) {
			cout << a[i][1];
			for (int j = 2; j <= m; j++) {
				cout << ' ' << a[i][j];
			}
			cout << endl;
		}
	}
	else {
		cout << a[1][1];
		for (int i = 2; i <= m; i++) {
			cout << ' ' << a[1][i];
		}
		cout << endl;
		for (int i = 2; i <= n - 1; i++) {
			cout << a[i][1];
			for (int j = 2; j <= m - 1; j++) {
				int tmp = a[i][j];
				for (int k = 0; k < 4; k++) {
					tmp += a[i + fx[k]][j + fy[k]];
				}
				int tmpe = tmp / 5;
				if (tmp - tmpe * 5 >= tmpe * 5 + 5 - tmp) {
					cout << ' ' << tmpe + 1;
				}
				else {
					cout << ' ' << tmpe;
				}
			}
			cout << ' ' << a[i][m] << endl;
		}
		cout << a[n][1];
		for (int i = 2; i <= m; i++) {
			cout << ' ' << a[n][i];
		}
		cout << endl;
	}
}