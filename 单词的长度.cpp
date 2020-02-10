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

	int flag = 0;
	cin.getline(str, 1000);
	int ans = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ' ') {
			if (ans == 0) {
				continue;
			}
			else {
				if (flag) {
					cout << ',' << ans;
				}
				else {
					cout << ans;
					flag = 1;
				}
				ans = 0;
			}
		}
		else {
			ans++;
		}
	}
	if (ans != 0) {
		if (flag) {
			cout << ',' << ans;
		}
		else {
			cout << ans;
		}
	}
	cout << endl;
}