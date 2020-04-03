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

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  
	
	int n;
	int ans = 0, tmp;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		ans += (tmp % 70 == 0 ? tmp / 70: tmp / 70 + 1);
	}
	cout << fixed << setprecision(1) << ans * 0.1 << endl;
}