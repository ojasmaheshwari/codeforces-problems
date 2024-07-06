#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define umap unordered_map
#define vi vector<int>
#define pb push_back

template<typename T>
T gcd(T a, T b) { T curr = 1; for (T i=1; i<=b; i++) {	if (a % i == 0 && b % i == 0) { curr = i;	} } return curr;}
template<typename T>
T lcm(T a, T b) { T start = max(a, b); T end = a*b; for (T i=start; i<end; i++) {	if ( i % a == 0 && i % b == 0 ) { return i;	} } return a*b;}
int countOccr(string &s, string sub) { int occrs=0, pos=0; while ( (pos = s.find(sub, pos)) != string::npos ) { occrs++; pos += sub.length(); } return occrs;}

void solve() {
	int n; cin >> n;
	vi a, b;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		a.pb(x);
	}
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		b.pb(x);
	}
	if (a == b) {
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		for (int i=0;i<n;i++) cout << a[i] << ' ';
		cout << '\n';
		for (int i=0;i<n;i++) cout << b[i] << ' ';
		cout << '\n';
	}
	else {
		for (int i=0;i<n;i++) cout << a[i] << ' ';
		cout << '\n';
		for (int i=0;i<n;i++) cout << b[i] << ' ';
		cout << '\n';
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
