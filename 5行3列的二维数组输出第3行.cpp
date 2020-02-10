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

int s[105][105], w[105][105];

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

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> s[i][j];
		}
	}
	cout << s[2][0] << ' ' << s[2][1] << ' ' << s[2][2] << endl;
}