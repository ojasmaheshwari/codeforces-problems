#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(vector<int> &sticks, int n) {
    map<int, int> m;
    int cnt = 0, not_found = 0;
    for (int &stick : sticks) {
	m[stick]++;
    }
    for (auto &p: m) {
	if (p.second >= 3) {
	    cnt += p.second / 3;
	} else {
	    not_found++;
	}
    }
    if (not_found == n) {
	cout << 0 << '\n';
	return;
    }
    else {
	cout << cnt << '\n';
	return;
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
	vector<int> sticks;
	for (int i=0; i<n; i++) {
	    int x;
	    cin >> x;
	    sticks.push_back(x);
	}
	solve(sticks, n);
    }
    return 0;
}
