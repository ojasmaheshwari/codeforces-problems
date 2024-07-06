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

pair<int, int> getComb(ll n) {
	string s_n = "1" + (char) (n - '0');
	string r_n = stoi(s_n);
	int j=5;
	for (int i=5; i<=9; i++) {
		for (int )
	}
}

void solve() {
	ll n; cin >> n;
	string r = to_string(n);
	string a = "", b = "";
	auto pair = getComb(r[r.length()-1]);
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
