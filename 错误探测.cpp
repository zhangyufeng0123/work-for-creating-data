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

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> num[i][j];
			if (num[i][j]) {
				a[i]++;
				b[j]++;
			}
		}
	}
	int flag1 = -1, flag2 = -1, flag = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] & 1) {
			if (flag1 == -1) {
				flag1 = i;
			}
			else {
				flag = 1;
				break;
			}
		}
		if (b[i] & 1) {
			if (flag2 == -1) {
				flag2 = i;
			}
			else {
				flag = 1;
				break;
			}
		}
	}
	if (flag) {
		cout << "Corrupt" << endl;
	}
	else {
		if ((flag1 == -1 && flag2 != -1) || (flag1 != -1 && flag2 == -1)) {
			cout << "Corrupt" << endl;
		}
		else {
			cout << "OK" << endl;
		}
	}
}