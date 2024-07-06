#include <bits/stdc++.h>

using namespace std;

void solve(string &a, string &b, int na, int nb) {
	int i=0, j=0;
	while (i<na, j<nb) {
		if (a[i] == b[j]) {
			i++;
			j++;
		}
		else {
			j++;
		}
	}
	cout << i << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, na, nb;
	string a, b;
	cin >> t;
	
	while(t--) {
		cin >> na >> nb;
		cin >> a;
		cin >> b;
		solve(a, b, na, nb);
	}
	
	return 0;
}
