#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define umap unordered_map

template<typename T>
T gcd(T a, T b) { T curr = 1; for (T i=1; i<=b; i++) {	if (a % i == 0 && b % i == 0) { curr = i;	} } return curr;}
template<typename T>
T lcm(T a, T b) { T start = max(a, b); T end = a*b; for (T i=start; i<end; i++) {	if ( i % a == 0 && i % b == 0 ) { return i;	} } return a*b;}
int countOccr(string &s, string sub) { int occrs=0, pos=0; while ( (pos = s.find(sub, pos)) != string::npos ) { occrs++; pos += sub.length(); } return occrs;}

/*
Algorithm:-

*/

void solve() {
	int n; cin >> n;
	vector<int> a;	
	vector<int> b;	
	for (int i=0; i<n; i++) {
		int x; cin >> x;
		a.push_back(x);
	}
	for (int i=0; i<n-1; i++) {
		b.push_back(a[i], a[i+1]);
	}
	cout << *min_element(b.begin(), b.end()) - 1 << '\n';
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
