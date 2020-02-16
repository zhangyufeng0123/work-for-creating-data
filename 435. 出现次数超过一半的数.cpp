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

int num[1005];
int judge[1000];

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
		judge[num[i] + 50]++;
	}
	int flag = 0;
	for (int i = 0; i <= 100; i++) {
		if (judge[i] > n / 2) {
			cout << i - 50 << endl;
			flag = 1;
			break;
		}
	}
	if (!flag) {
		cout << "no" << endl;
	}
}