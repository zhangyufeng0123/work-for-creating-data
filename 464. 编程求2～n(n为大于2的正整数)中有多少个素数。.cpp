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

int solve(int a) {
	for (int i = 2; i <= a / 2; i++) {
		if (a % i == 0) {
			return 1;
		}
	}
	return 0;
}

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  
	
	int n, m = 0;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		if (!solve(i)) {
			m++;
		}
	}
	cout << m << endl;
}