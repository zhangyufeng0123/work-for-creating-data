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
	int len1 = strlen(str2), len2 = strlen(str3);
	for (int i = 0; i < len1; i++) {
		if(str2[i] >= 'A' && str2[i] <= 'Z'){
			str2[i] += 32;
		}
	}
	for (int i = 0; i < len2; i++) {
		if (str3[i] >= 'A' && str3[i] <= 'Z') {
			str3[i] += 32;
		}
	}
	int flag = 0;
	for (int i = 0; i < min(len1, len2); i++) {
		if (str2[i] > str3[i]) {
			flag = 1;
			break;
		}
		else if (str2[i] < str3[i]) {
			flag = -1;
			break;
		}
	}
	if (flag == 1) {
		cout << '>' << endl;
	}
	else if (flag == -1) {
		cout << '<' << endl;
	}
	else {
		if (len1 > len2) {
			cout << '>' << endl;
		}
		else if(len1 < len2){
			cout << '<' << endl;
		}
		else {
			cout << '=' << endl;
		}
	}
}