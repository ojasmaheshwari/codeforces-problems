// Template and code by Ojas Maheshwari

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define umap unordered_map
#define v vector

template<typename T>
T gcd(T a, T b) { T curr = 1; for (T i=1; i<=b; i++) {	if (a % i == 0 && b % i == 0) { curr = i;	} } return curr;}
template<typename T>
T lcm(T a, T b) { T start = max(a, b); T end = a*b; for (T i=start; i<end; i++) {	if ( i % a == 0 && i % b == 0 ) { return i;	} } return a*b;}
int countOccr(string &s, string sub) { int occrs=0, pos=0; while ( (pos = s.find(sub, pos)) != string::npos ) { occrs++; pos += sub.length(); } return occrs;}
template<typename T>void tvi(v<T> &a, int n) {	for (int i=0; i<n; i++) { cin >> a[i];	}}
template<typename T>void pv(v<T> &a) {	for (auto &i : a) { cout << i << ' ';	}	cout << '\n';}

bool allsame(v<int> &a) {
	for (int i=1; i<a.size(); i++) {
		if (a[i-1] != a[i])
			return false;
	}
	return true;
}

void solve() {
	int n; cin >> n;
	v<int> a(n);
	tvi(a, n);
	if (allsame(a)) {
		cout << "NO\n";
	}
	else {
		string s(n, 'R');
		s[1] = 'B';
		cout << "YES\n";
		cout << s << '\n';
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
