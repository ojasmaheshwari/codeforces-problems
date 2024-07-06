#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define umap unordered_map

template<typename T>
T gcd(T a, T b) { T curr = 1; for (T i=1; i<=b; i++) {	if (a % i == 0 && b % i == 0) { curr = i;	} } return curr;}
template<typename T>
T lcm(T a, T b) { T start = max(a, b); T end = a*b; for (T i=start; i<end; i++) {	if ( i % a == 0 && i % b == 0 ) { return i;	} } return a*b;}
int countOccr(string &s, string sub) { int occrs=0, pos=0; while ( (pos = s.find(sub, pos)) != string::npos ) { occrs++; pos += sub.length(); } return occrs;}

/* Algorithm
0) ops = m, i=0;
1) loop thru a while ops != 0, i++, repl_with = b[i], check if b[i] exists in d
	if yes then a[i] = b[i], ops--, continue
	else NO
2) check in above loop if i == n, if yes then i = 0
3) check if a == b, if true then YES else NO
*/

void solve() {
	ll n, m;
	cin >> n;
	vector<ll> a, b, d;
	for (ll i=0; i<n; i++) {
		ll x; cin >> x;
		a.push_back(x);
	}
	for (ll i=0; i<n; i++) {
		ll x; cin >> x;
		b.push_back(x);
	}
	cin >> m;
	for (ll i=0; i<m; i++) {
		ll x; cin >> x;
		d.push_back(x);
	}

	map<ll, ll> map;
	for (int i=0; i<m; i++) {
		map[d[i]]++;
	}
	bool ok=false;
	for (int i=0; i<n; i++) {
		if (b[i] == d[m-1]) ok=true;
		if (a[i]!=b[i]) {
			if (map[b[i]]>0) {
				map[b[i]]--;
				if (map[b[i]]==0) map.erase(b[i]);
			} else {
				cout << "NO\n";
				return;
			}
		}
	}

	if (map.size() > 0 && ok==false)
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

