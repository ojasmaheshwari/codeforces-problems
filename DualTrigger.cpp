#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define umap unordered_map

void solve() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int count_1 = count(s.begin(), s.end(), '1');
    if ( count_1 == 2 && s.find("11") != string::npos ) {
	cout << "NO\n";
	return;
    }
    if (count_1 & 1) cout << "NO\n";
    else cout << "YES\n";
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
