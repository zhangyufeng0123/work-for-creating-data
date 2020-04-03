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

int fan(int n) {
	int m = 0;
	while (n > 0) {
		m += n % 10;
		n /= 10;
	}
	return m;
}

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  
	
	int n, s;
	cin >> n;
	s = fan(n);
	cout << s << endl;
}