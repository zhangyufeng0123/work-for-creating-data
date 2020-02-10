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

struct node {
	int a, b, c;
	int num;
}a[1000];

int fx[8] = { 0, 1, 0, -1, 1, -1, 1, -1 };
int fy[8] = { 1, 0, -1, 0, 1, -1, -1, 1 };

bool cmp1(node &a, node &b) {
	return a.num < b.num;
}

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].num >> a[i].a >> a[i].b >> a[i].c;
	}

	a[n].b = a[0].b, a[n].a = a[0].a, a[n].c = a[0].c;
	a[n + 1].b = a[0].num, a[n + 1].a = a[0].num, a[n + 1].c = a[0].num;
	for (int i = 0; i < n; i++) {
		if (a[i].a > a[n].a) {
			a[n].a = a[i].a;
			a[n + 1].a = a[i].num;
		}
		if (a[i].b > a[n].b) {
			a[n].b = a[i].b;
			a[n + 1].b = a[i].num;
		}
		if (a[i].c > a[n].c) {
			a[n].c = a[i].c;
			a[n + 1].c = a[i].num;
		}
	}
	cout << a[n + 1].a << ' ' << a[n + 1].b << ' ' << a[n + 1].c << endl;
}