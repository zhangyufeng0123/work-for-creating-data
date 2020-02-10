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

const int maxnn = 20010;
char a[maxnn];

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	cin.getline(a, 20010);
	int k = 0;
	int maxn = 0, minn = 101;
	int c = 0, d = 0;
	int l = strlen(a);
	for (int i = 0; i <= l; i++) {
		if (a[i] != ' ' &&a[i] != ',' && a[i] != '\0')++k;
		else if (k > 0) {
			if (k > maxn) { maxn = k; c = i - k; }
			if (k < minn) { minn = k; d = i - k; }
			k = 0;
		}
	}
	for (int i = c; i <= c + maxn - 1; ++i)
		cout << a[i];
	cout << endl;
	for (int i = d; i <= d + minn - 1; ++i)
		cout << a[i];
}