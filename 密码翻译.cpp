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

	getline(cin, str1);
	int len = str1.size();
	for (int i = 0; i < len; i++) {
		if ((str1[i] >= 'a' && str1[i] < 'z') || (str1[i] >= 'A' && str1[i] < 'Z')) {
			cout << char(str1[i] + 1);
		}
		else if (str1[i] == 'Z' || str1[i] == 'z') {
			cout << char(str1[i] - 25);
		}
		else {
			cout << str1[i];
		}
	}
	cout << endl;
}