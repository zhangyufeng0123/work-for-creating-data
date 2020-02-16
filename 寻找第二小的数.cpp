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

const int maxn = (int)1e5 + 100;
int num[maxn], judge[maxn];

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> num[i];
		}
		sort(num, num + n);
		int flag = 0;
		for (int i = 0; i < n - 1; i++) {
			if (num[i] == num[i + 1]) {
				continue;
			}
			flag = i + 1;
			break;
		}
		if (flag) {
			cout << num[flag] << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}