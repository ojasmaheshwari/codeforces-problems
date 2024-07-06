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

void solve() {
	ll a, b, xk, yk, xq, yq;
	cin >> a >> b;
	cin >> xk >> yk;
	cin >> xq >> yq;
	v<pair<ll, ll>> setA(8);
	v<pair<ll, ll>> setB(8);

	pair<ll, ll> p1 = {xk - b, yk - a};
	pair<ll, ll> p2 = {xk + b, yk - a};
	pair<ll, ll> p3 = {xk + a, yk - b};
	pair<ll, ll> p4 = {xk + a, yk + b};
	pair<ll, ll> p5 = {xk + b, yk + a};
	pair<ll, ll> p6 = {xk - b, yk + a};
	pair<ll, ll> p7 = {xk - a, yk + b};
	pair<ll, ll> p8 = {xk - a, yk - b};

	setA = {p1, p2, p3, p4, p5, p6, p7, p8};

	p1 = {xq - b, yq - a};
	p2 = {xq + b, yq - a};
	p3 = {xq + a, yq - b};
	p4 = {xq + a, yq + b};
	p5 = {xq + b, yq + a};
	p6 = {xq - b, yq + a};
	p7 = {xq - a, yq + b};
	p8 = {xq - a, yq - b};

	setB = {p1, p2, p3, p4, p5, p6, p7, p8};

	int cnt=0;

	for (auto &p : setA) {
		for (auto &q: setB) {
			if (p == q) {
				cnt++;
			}
		}
	}

	cout << cnt << '\n';


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
