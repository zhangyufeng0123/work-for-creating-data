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

string str1, str2;
char str[10000], ans[10000];

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	cin >> str;
	int len = strlen(str);
	if (str[0] >= '0' && str[0] <= '9') {
		cout << "no" << endl;
	}
	else {
		int flag = 0;
		for (int i = 0; i < len; i++) {
			if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9') || str[i] == '_') {
				continue;
			}
			flag = 1;
			break;
		}
		if (flag) {
			cout << "no" << endl;
		}
		else {
			cout << "yes" << endl;
		}
	}
}