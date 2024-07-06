#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define umap unordered_map

void solve() {
    int p1, p2, p3, ans = 0;
    cin >> p1 >> p2 >> p3;
    if ((p1 + p2 + p3) & 1){
	cout << -1 << '\n';
	return;
    }
    if (p1 + p2 <= p3) {
	cout << p1 + p2 << '\n';
	return;
    }
    // p3 < p1 + p2
    while (p1 + p2 > p3) {
	p1--;
	p2--;
	ans++;
    }
    ans += p1 + p2;
    cout << ans << '\n';
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
