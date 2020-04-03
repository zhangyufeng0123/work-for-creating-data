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

int ack(int m, int n) {
	if (m == 0) {
		return n + 1;
	}
	else if (n == 0 && m > 0) {
		return ack(m - 1, 1);
	}
	else{
		return ack(m - 1, ack(m, n - 1));
	}
}

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  
	
	int m, n;
	cin >> m >> n;
	cout << ack(m, n) << endl;
}