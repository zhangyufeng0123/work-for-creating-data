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

ll b[10005], c[1000];
ll a[1000][1000];

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> a[i][j];
		}
	}
	ll maxx[10] = { 0 }, minn[10] = { 100 };
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			maxx[i] = max(maxx[i], a[i][j]);
			minn[j] = min(minn[j], a[i][j]);
		}
	}
	int flag = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (maxx[i] == minn[j]) {
				cout << i + 1 << ' ' << j + 1 << ' ' << a[i][j] << endl;
				flag = 1;
			}
		}
	}
	if (!flag) {
		cout << "not found" << endl;
	}
}