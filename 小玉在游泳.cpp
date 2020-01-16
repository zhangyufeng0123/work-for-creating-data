#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<iomanip>
#include<ctime>

typedef long long ll;

using namespace std;

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	float a = 2.0, sum = 2.0;
	int ans = 1;
	float n;
	cin >> n;
	while (sum < n) {
		a = a * 0.98;
		sum += a;
		ans++;
	}
	cout << ans << endl;
}