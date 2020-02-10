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

char str[10000], ans[10000];
char str1[200][100], str2[100], str3[100];

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str1[i];
	}
	for (int i = 0; i < n; i++) {
		if (str1[i][0] >= 'a' && str1[i][0] <= 'z') {
			cout << char(str1[i][0] - 32);
		}
		else {
			cout << str1[i][0];
		}
		int len = strlen(str1[i]);
		for (int j = 1; j < len; j++) {
			if (str1[i][j] >= 'A' && str1[i][j] <= 'Z') {
				cout << char(str1[i][j] + 32);
			}
			else {
				cout << str1[i][j];
			}
		}
		cout << endl;
	}
}