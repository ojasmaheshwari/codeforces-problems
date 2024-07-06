#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
    int n;
    string s;
    cin >> n;
    if (n % 2 == 0) {
	if (n==0) {
	    cout << "YES\n";
	    cout << "AB\n";
	    return;
	}
	for (int i=0; i<n/2; i++) {
	    if (i % 2 == 0)
		s += "AA";
	    else
		s += "BB";
	}
	cout << "YES\n";
	cout << s << '\n';
    }
    else {
	cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
	solve();
    }
    return 0;
}
