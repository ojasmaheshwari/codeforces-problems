#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define umap unordered_map

vector<int> genShortVec(int start, int end) {
    vector<int> v;
    int path1 = 12 - start + 1 + end;
    int path2 = start - end + 1;
    if (path1 <= path2) {
	for (int i=start; i<=12; i++) {
	    v.push_back(i);
	}
	for (int i=1; i<=end; i++) {
	    v.push_back(i);
	}
    }
    else {
	for (int i=end; i<=start; i++) {
	    v.push_back(i);
	}
    }
    return v;
}

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<int> vec = genShortVec(max(a,b), min(a,b));
    bool c_exists = false;
    bool d_exists = false;
    for (auto v : vec) {
	if (c==v)
	    c_exists = true;
	if (d==v)
	    d_exists = true;
    }
    if (c_exists && d_exists)
	cout << "NO\n";
    if ( (c_exists || d_exists) && (c_exists != d_exists))
	cout << "YES\n";
    if (!c_exists && !d_exists)
	cout << "NO\n";
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
