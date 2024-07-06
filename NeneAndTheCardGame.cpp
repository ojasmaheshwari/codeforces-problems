#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(unordered_map<int, int> &m, int n) {
    int cnt=0;
    for (auto &p : m) {
	if (p.second == 2) {
	    cnt++;
	}
    }
    cout << cnt << '\n';
}

int main() {
    int t;
    cin >> t;
    while(t--) {
	int n;
	cin >> n;
	unordered_map<int, int> m;
	for (int i=0; i<n; i++) {
	    int x;
	    cin >> x;
	    m[x]++;
	}
	solve(m, n);
    }
    return 0;
}
