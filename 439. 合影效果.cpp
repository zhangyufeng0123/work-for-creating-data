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

string str;
double num, a[100], b[100];

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	int n;
	cin >> n;
	int f = 0, m = 0;
	for (int i = 0; i < n; i++) {
		cin >> str >> num;
		if (str[0] == 'f') {
			a[f++] = num;
		}
		else {
			b[m++] = num;
		}
	}
	sort(a, a + f);
	sort(b, b + m);
	cout << fixed << setprecision(2) << b[0];
	for (int i = 1; i < m; i++) {
		cout << ' ' << fixed << setprecision(2) << b[i];
	}
	for (int i = f - 1; i >= 0; i--) {
		cout << ' ' << fixed << setprecision(2) << a[i];
	}
}