#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	int tmp = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			tmp = i;
		}
	}
	cout << n - tmp - 1 << '\n';
	return 0;
}
