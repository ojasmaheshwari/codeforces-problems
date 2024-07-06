#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(ll a, ll b) {
    if (a >= b) {
	cout << b << ' ' << a << '\n';
    }
    else {
	cout << a << ' ' << b << '\n';
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    ll a, b;
    cin >> t;
    while (t--) {
	cin >> a >> b;
	solve(a, b);
    }
    return 0;
}
