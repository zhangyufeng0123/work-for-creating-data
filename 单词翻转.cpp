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

		cin.getline(str, 500);
		int len = strlen(str);
		int flag = 0, l = 0, r = 0;
		for (int i = 0; i < len; i++) {
			if (str[i] == ' ') {
				if (!flag) {
					cout << ' ';
				}
				else {
					r = i - 1;
					for (int j = r; j >= l; j--) {
						cout << str[j];
					}
					cout << ' ';
				}
				flag = 0;
			}
			else {
				if (!flag) {
					l = i;
				}
				flag = 1;
			}
		}
		if (flag) {
			r = len - 1;
			for (int j = r; j >= l; j--) {
				cout << str[j];
			}
			cout << endl;
		}
	}