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

string str;

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	int n;

	getline(cin, str);
	n = str.size();
	int judge[50];
	memset(judge, 0, sizeof(judge));
	for (int i = 0; i < n; i++) {
		judge[str[i] - 'a']++;
	}
	int flag = 0;
	for (int i = 0; i < 26; i++) {
		if (judge[i] == 1) {
			flag++;
		}
	}
	if (!flag) {
		cout << "no" << endl;
	}
	else {
		for (int i = 0; i < n; i++) {
			if (judge[str[i] - 'a'] == 1) {
				cout << str[i] << endl;
				break;
			}
		}
	}
}