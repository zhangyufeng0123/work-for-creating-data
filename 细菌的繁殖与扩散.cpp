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
	memset(a, 0, sizeof(a));
	a[5][5] = n;
	for (int i = 0; i < m; i++) {
		memset(b, 0, sizeof(b));
		for (int j = 1; j <= 9; j++) {
			for (int k = 1; k <= 9; k++) {
				if (a[j][k] != 0) {
					b[j][k] += (2 * a[j][k]);
					for (int s = 0; s < 8; s++) {
						b[j + fx[s]][k + fy[s]] += a[j][k];
					}
				}
			}
		}
		for (int j = 1; j <= 9; j++) {
			for (int k = 1; k <= 9; k++) {
				a[j][k] = b[j][k];
			}
		}
	}
	for (int i = 1; i <= 9; i++) {
		cout << a[i][1];
		for (int j = 2; j <= 9; j++) {
			cout << ' ' << a[i][j];
		}
		cout << endl;
	}
}