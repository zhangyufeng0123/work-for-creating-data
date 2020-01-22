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
ll num[1000][1000];

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	int n, m, ans = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> num[i][j];
		}
	}
	if (n == 1) {
		for (int i = 0; i < m; i++) {
			ans += num[0][i];
		}
	}
	else if (m == 1) {
		for (int i = 0; i < n; i++) {
			ans += num[i][0];
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
					ans += num[i][j];
				}
			}
		}
	}
	cout << ans << endl;
}