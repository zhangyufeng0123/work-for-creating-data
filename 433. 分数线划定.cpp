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
	int a;
	int b;
}a[10000];

bool cmp(node & a, node & b) {
	if(a.a == b.a){
		return a.b < b.b;
	}
	return a.a > b.a;
}

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i].b >> a[i].a;
	}
	sort(a, a + n, cmp);
	int k = m * 1.5;
	for (int i = k - 1; i < n; i++) {
		if (a[i].a == a[i + 1].a) {
			k++;
		}
		else {
			break;
		}
	}
	cout << a[k - 1].a << ' ' << k << endl;
	for (int i = 0; i < k; i++) {
		cout << a[i].b << ' ' << a[i].a << endl;
	}
}