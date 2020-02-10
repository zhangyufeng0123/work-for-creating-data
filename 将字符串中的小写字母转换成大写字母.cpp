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

	cin.getline(str1, 100);
	int n = strlen(str1);
	for (int i = 0; i < n; i++) {
		if (str1[i] >= 'a' && str1[i] <= 'z') {
			cout << char(str1[i] - 32);
		}
		else {
			cout << str1[i];
		}
	}
	cout << endl;
}