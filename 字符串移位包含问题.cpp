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
	for (int i = 0; i < len2; i++) {
		int j = 0;
		for (; j < len3; j++) {
			if (str2[(i + j) % len2] != str3[j]) {
				break;
			}
		}
		if (j == len3) {
			flag = 1;
			break;
		}
	}
	if (flag) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
}