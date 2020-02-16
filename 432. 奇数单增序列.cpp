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

const int maxn = (int)1e5 + 100;
int num[maxn], judge[maxn];

int main(void) {
#ifdef ONLINE_JUDGE
#else
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif  

	int n;
	cin >> n;
	int k = 0;
	for (int i = 0; i < n; i++) {
		cin >> num[k];
		if (num[k] & 1) {
			k++;
		}
	}
	sort(num, num + k);
	for (int i = 0; i < k; i++) {
		if (!i) {
			cout << num[i];
		}
		else {
			cout << ',' << num[i];
		}
	}
	cout << endl;
}