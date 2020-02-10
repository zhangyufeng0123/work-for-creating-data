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
char str1[100], str2[100], str3[100];

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	cin >> str1;
	int n = strlen(str1);
	for (int i = 0; i < 52; i++) {
		str2[i] = 'a' + (i % 26);
		str3[i] = 'A' + (i % 26);
	}
	for (int i = 0; i < n; i++) {
		if (str1[i] >= 'A' && str1[i] <= 'Z') {
			str1[i] = str2[str1[i] - 'A' + 3];
		}
		else {
			str1[i] = str3[str1[i] - 'a' + 3];
		}
	}
	for (int i = 0; i < n / 2; i++) {
		swap(str1[i], str1[n - 1 - i]);
	}
	for (int i = 0; i < n; i++) {
		cout << str1[i];
	}
	cout << endl;
}