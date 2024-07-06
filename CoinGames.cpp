#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define umap unordered_map

void solve() {
    int n;
    cin >> n;
    string c;
    cin >> c;
    int u_count = count(c.begin(), c.end(), 'U');
    if ( u_count & 1 ) {
	cout << "YES\n";
    }
    else {
	cout << "NO\n";
    }
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
