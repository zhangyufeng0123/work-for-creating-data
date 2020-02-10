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

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> b[i][j];
		}
	}
	int flag = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i][j] != b[j][n + 1 - i]) {
				flag = 1;
				break;
			}
		}
		if (flag) {
			break;
		}
	}
	if (!flag) {
		cout << 1 << endl;
	}
	else {
		flag = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (a[i][j] != b[n + 1 - j][i]) {
					flag = 1;
					break;
				}
			}
			if (flag) {
				break;
			}
		}
		if (!flag) {
			cout << 2 << endl;
		}
		else {
			flag = 0;
			for (int i = 1; i < n; i++) {
				for (int j = 1; j <= i; j++) {
					if (a[i][j] != b[n + 1 - i][n + 1 - j]) {
						flag = 1;
						break;
					}
				}
				if (flag) {
					break;
				}
			}
			if (!flag) {
				cout << 3 << endl;
			}
			else {
				flag = 0;
				for (int i = 1; i <= n; i++) {
					for (int j = 1; j <= n; j++) {
						if (a[i][j] != b[i][j]) {
							flag = 1;
							break;
						}
					}
					if (flag) {
						break;
					}
				}
				if (!flag) {
					cout << 4 << endl;
				}
				else {
					cout << 5 << endl;
				}
			}
		}
	}
}