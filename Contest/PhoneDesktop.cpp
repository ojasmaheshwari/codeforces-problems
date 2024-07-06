#include <iostream>
#include <cmath>

using namespace std;

#define ll long long

void solve(int x, int y) {
    int scr = 0;
    if (x==0 && y==0) {
	cout << 0 << '\n';
	return;
    } else if (y <= 2) {
	scr = 1;
    }
    else {
	scr += ceil(y/2.0);
    }
    int rem = scr*15 - y*4;
    if (x > rem) {
	scr += ceil((x-rem)/15.0);
    }
    cout << scr << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
	int x, y;
	cin >> x >> y;
	solve(x, y);
    }
    return 0;
}
