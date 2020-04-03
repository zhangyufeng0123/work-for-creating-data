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
	cin >> n;
	for (int i = 2; i <= n; i++) {
		int t = 1;
		for (int j = 2; j <= i / 2; j++) {
			if (i % j == 0) {
				t += j;
			}
		}
		if (t == i) {
			cout << i << endl;
		}
	}
}