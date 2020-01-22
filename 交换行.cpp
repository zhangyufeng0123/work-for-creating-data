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

	int n, m;
	int a[10][10];
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			cin >> a[i][j];
		}
	}
	cin >> n >> m;
	for (int i = 1; i <= 5; i++) {
		int t = i;
		if (i == m) {
			t = n;
		}
		else if (i == n) {
			t = m;
		}
		cout << a[t][1];
		for (int j = 2; j < 6; j++) {
			cout << ' ' << a[t][j];
		}
		cout << endl;
	}
}