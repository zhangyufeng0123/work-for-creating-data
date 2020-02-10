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

	cin >> str;
	int len = strlen(str);
	if (len == 2 && ((str[0] == 'e' && str[1] == 'r') || (str[0] == 'l' && str[1] == 'y'))) {
		cout << str << endl;
	}
	else if (len == 3 && (str[0] == 'i' && str[1] == 'n' && str[2] == 'g')) {
		cout << str << endl;
	}
	else {
		int tmp = 0;
		if ((str[len - 2] == 'e' && str[len - 1] == 'r') || (str[len - 2] == 'l' && str[len - 1] == 'y')) {
			tmp = 2;
		}
		else if (str[len - 1] == 'g' && str[len - 2] == 'n' && str[len - 3] == 'i') {
			tmp = 3;
		}
		for (int i = 0; i < len - tmp; i++) {
			cout << str[i];
		}
		cout << endl;
	}
}