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

bool C(char c) {
	if (c == 'b' || c == 'c' || c == 'd') {
		return true;
	}
	return false;
}

bool V(char c) {
	if (c == 'a' || c == 'e') {
		return true;
	}
	return false;
}

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	string t = "";
	string ans = "";

	for (char c : s) {
		if (C(c))
			t += "C";
		else
			t += "V";
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
