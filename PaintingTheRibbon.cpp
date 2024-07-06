#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define umap unordered_map

template <typename T>

T mostFreqElem() {}

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    if ( k >= (n - ceil( n / (float)m )) )
	cout << "NO\n";
    else
	cout << "YES\n";
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
