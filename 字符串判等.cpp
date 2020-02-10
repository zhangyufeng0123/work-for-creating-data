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

	cin.getline(str2, 100);
	cin.getline(str3, 100);
	int len2 = strlen(str2), len3 = strlen(str3);
	int k1 = 0, k2 = 0;
	for (int i = 0; i < len2; i++) {
		if (str2[i] != ' ') {
			str[k1++] = str2[i];
		}
	}
	for (int j = 0; j < len3; j++) {
		if (str3[j] != ' ') {
			ans[k2++] = str3[j];
		}
	}
	if (k1 != k2) {
		cout << "NO" << endl;
	}
	else {
		int flag = 0;
		for (int i = 0; i < k1; i++) {
			int tmp = abs((str[i] - ans[i]));
			if (tmp != 32 && tmp != 0) {
				flag = 1;
				break;
			}
		}
		if (flag) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
	}
}