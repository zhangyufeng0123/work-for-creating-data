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

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str1 >> str2;
		if (str1[0] == str2[0]) {
			cout << "Tie" << endl;
		}
		else if ((str1[0] == 'S' && str2[0] == 'P') || (str1[0] == 'P' && str2[0] == 'R') || (str1[0] == 'R' && str2[0] == 'S')) {
			cout << "Player1" << endl;
		}
		else {
			cout << "Player2" << endl;
		}
	}
}