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

string str1, str2;

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	double e;
	cin >> e;
	cin >> str1 >> str2;
	int n = str1.size();
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (str1[i] == str2[i]) {
			ans++;
		}
	}
	if (ans >= n * e) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}
}