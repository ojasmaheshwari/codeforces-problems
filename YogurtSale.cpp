#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(int n, int a, int b) {
    if (b <= 2*a) {
	if (n%2==0)
	    cout << (n/2)*b << '\n';
	else
	    cout << (n/2)*b + a << '\n';
    }
    else {
	cout << n*a << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
	int n, a, b;
	cin >> n >> a >> b;
	solve(n, a, b);
    }
    return 0;
}
