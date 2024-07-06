#include <bits/stdc++.h>

using namespace std;

#define ll long long

int gcd(int a, int b) {
    int curr = 1;
    for (int i=1; i<=b; i++) {
	if (a % i == 0 && b % i == 0) {
	    curr = i;
	}
    }
    return curr;
}

void solve(int x) {
    int y;
    int max = 0;
    for (int i=1; i<x; i++) {
	int curr = gcd(x, i) + i;
	if (curr > max) {
	    max = curr;
	    y = i;
	}
    }

    cout << y << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t, x, y;
    cin >> t;
    while (t--) {
	cin >> x;
	solve(x);
    }
    return 0;
}
