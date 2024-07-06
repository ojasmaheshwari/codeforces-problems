#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define umap unordered_map

template<typename T>
T gcd(T a, T b) { T curr = 1; for (T i=1; i<=b; i++) {	if (a % i == 0 && b % i == 0) { curr = i;	} } return curr;}
template<typename T>
T lcm(T a, T b) { T start = max(a, b); T end = a*b; for (T i=start; i<end; i++) {	if ( i % a == 0 && i % b == 0 ) { return i;	} } return a*b;}
int countOccr(string &s, string sub) { int occrs=0, pos=0; while ( (pos = s.find(sub, pos)) != string::npos ) { occrs++; pos += sub.length(); } return occrs;}

void solve() {
	ll n, f, a , b;
	cin >> n >> f >> a >> b;
	ll p = 0;
	for (ll i=0; i<n; i++) {
		ll x; cin >> x;
		if ( ((x - p) * a) <= b ) {
			f -= (x - p) * a;
		}
		else {
			f -= b;
		}
		p = x;
	}
	if (f > 0)
		cout << "YES\n";
	else
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
