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
	for (int i = 0; i < len; i++) {
		if (str[i] == 'A') {
			cout << 'T';
		}
		else if (str[i] == 'T') {
			cout << 'A';
		}
		else if (str[i] == 'C') {
			cout << 'G';
		}
		else {
			cout << 'C';
		}
	}
	cout << endl;
}