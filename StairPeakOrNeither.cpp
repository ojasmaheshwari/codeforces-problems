#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if (c > a && c > b && b > a)
	cout << "STAIR\n";
    else if (b > a && b > c)
	cout << "PEAK\n";
    else
	cout << "NONE\n";
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
