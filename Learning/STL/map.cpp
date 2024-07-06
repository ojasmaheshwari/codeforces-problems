#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    map<string, int> m;
    while (t--) {
	string s;
	cin >> s;
	m[s] = m[s] + 1;
    }

    for (auto &p : m) {
	cout << p.first << ' ' << p.second << '\n';
    }
    return 0;
}
