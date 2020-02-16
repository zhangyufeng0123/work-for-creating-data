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
	int sum;
	int id;
}a[500];

bool cmp(node &a, node &b) {
	if (a.sum == b.sum) {
		if (a.a == b.a) {
			return a.id < b.id;
		}
		return a.a > b.a;
	}
	return a.sum > b.sum;
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
		a[i].id = i + 1;
		cin >> a[i].a >> a[i].b >> a[i].c;
		a[i].sum = a[i].a + a[i].b + a[i].c;
	}
	sort(a, a + n, cmp);
	for (int i = 0; i < 5; i++) {
		cout << a[i].id << ' ' << a[i].sum << endl;
	}
}