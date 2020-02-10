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
char str1[200][100], str2[200], str3[200];

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	cin >> str2 >> str3;
	int len2 = strlen(str2), len3 = strlen(str3);
	int flag = 0;
	if (len2 < len3) {
		for (int i = 0; i < len3 - len2 + 1; i++) {
			int j = 0;
			for (; j < len2; j++) {
				if (str2[j] != str3[i + j]) {
					break;
				}
			}
			if (j == len2) {
				flag = 1;
				break;
			}
		}
		if (flag) {
			cout << str2 << " is substring of " << str3 << endl;
		}
	}
	else {
		for (int i = 0; i < len2 - len3 + 1; i++) {
			int j = 0;
			for (; j < len3; j++) {
				if (str3[j] != str2[i + j]) {
					break;
				}
			}
			if (j == len3) {
				flag = 1;
				break;
			}
		}
		if (flag) {
			cout << str3 << " is substring of " << str2 << endl;
		}
	}
	if (!flag) {
		cout << "No substring" << endl;
	}
}