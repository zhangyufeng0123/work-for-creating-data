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

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	int flag = 0;
	for (int i = 0; i < n - 1; i++) {
		int t = abs(num[i + 1] - num[i]);
		if (t > n - 1) {
			flag = 1;
			break;
		}
		else if (judge[t]) {
			flag = 1;
			break;
		}
		else {
			judge[t]++;
		}
	}
	if (flag) {
		cout << "Not jolly" << endl;
	}
	else {
		cout << "Jolly" << endl;
	}
}