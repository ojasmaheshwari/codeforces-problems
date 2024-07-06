#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(int n) {
    char arr[2*n][2*n];
    for (int i=0; i<2*n; i++) {
	for (int j=0; j<2*n; j++) {
	    arr[i][j] = '.';
	}
    }
    for (int i=0; i<2*n; i++) {
	for (int j=0; j<2*n; j++) {
	    if (i % 4 == 0 && j % 4 == 0) {
		arr[i][j] = '#';
		arr[i+1][j] = '#';
		arr[i][j+1] = '#';
		arr[i+1][j+1] = '#';
	    }
	    if ( i % 2 == 0 && i != 0 && (i / 2) % 2 != 0 && j % 2 == 0 && j != 0 && (j / 2) % 2 != 0) {
		arr[i][j] = '#';
		arr[i+1][j] = '#';
		arr[i][j+1] = '#';
		arr[i+1][j+1] = '#';
	    }
	}
    }
    for (int i=0; i<2*n; i++) {
	for (int j=0; j<2*n; j++) {
	    cout << arr[i][j];
	}
	cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
	int n;
	cin >> n;
	solve(n);
    }
    return 0;
}
