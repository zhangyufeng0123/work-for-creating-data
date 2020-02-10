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
			char tmp;
			cin >> tmp;
			if (tmp == '*') {
				a[i][j] = 1;
			}
			else {
				a[i][j] = 0;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j]) {
				cout << '*';
			}
			else {
				int tmp = 0;
				for (int k = 0; k < 8; k++) {
					tmp += a[i + fx[k]][j + fy[k]];
				}
				cout << tmp;
			}
		}
		cout << endl;
	}
}