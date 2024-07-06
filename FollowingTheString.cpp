#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define umap unordered_map

char low_alphas[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

void solve() {
	int n; cin >> n;
	string s;
	map<char, int> m;
	int c=97;
	for (int i=0; i<n; i++) {
		int x; cin >> x;
		if (x == 0) {
			s += (char)c;
			m[(char)c]++;
			c++;
		}
		else {
			for (auto &it : m) {
				if (it.second == x) {
					s += it.first;
					m[it.first]++;
					break;
				}
			}
		}
	}
	cout << s << '\n';
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
