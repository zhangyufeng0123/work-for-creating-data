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

	char m, n;
	cin >> str >> m >> n;
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (str[i] == m) {
			cout << n;
		}
		else {
			cout << str[i];
		}
	}
	cout << endl;
}