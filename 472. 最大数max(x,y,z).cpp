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

int maxx(int a, int b, int c) {
	if (a > b) {
		return a > c ? a : c;
	}
	else {
		return b > c ? b : c;
	}
}

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  
	
	int a, b, c;
	cin >> a >> b >> c;
	cout << fixed << setprecision(3) << maxx(a, b, c) * 1.0 / (maxx(a + b, b, c) * maxx(a, b, b + c)) << endl;
}