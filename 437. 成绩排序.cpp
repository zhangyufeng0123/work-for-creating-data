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
	char name[21];
	int score;
}a[100];

bool cmp(node a, node b) {
	if (a.score == b.score) {
		int t = strcmp(a.name, b.name);
		return t < 0;
	}
	return a.score > b.score;
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
		cin >> a[i].name >> a[i].score;
	}
	sort(a, a + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << a[i].name << ' ' << a[i].score << endl;
	}
}