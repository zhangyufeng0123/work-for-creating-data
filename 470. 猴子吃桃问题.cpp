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
	
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		int ans = 1;
		for (int i = 0; i < n; i++) {
			ans = (ans + 1) * 2;
		}
		cout << ans << endl;
	}
}