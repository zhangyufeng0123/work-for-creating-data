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

int one[100], zero[100];

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	int o = 0, z = 0;
	for (int i = 0; i < 10; i++) {
		int tmp;
		cin >> tmp;
		if (tmp & 1) {
			one[o++] = tmp;
		}
		else {
			zero[z++] = tmp;
		}
	}
	sort(one, one + o);
	sort(zero, zero + z);
	if (o) {
		for (int i = o - 1; i >= 0; i--) {
			cout << one[i];
			if (i) {
				cout << ' ';
			}
		}
	}
	if (z) {
		if (o) {
			cout << ' ';
		}
		for (int i = 0; i < z; i++) {
			cout << zero[i];
			if (i != z - 1) {
				cout << ' ';
			}
		}
	}
	cout << endl;
}