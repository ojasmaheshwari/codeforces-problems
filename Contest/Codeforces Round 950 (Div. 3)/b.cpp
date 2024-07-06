#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define umap unordered_map

template<typename T>
T gcd(T a, T b) { T curr = 1; for (T i=1; i<=b; i++) {	if (a % i == 0 && b % i == 0) { curr = i;	} } return curr;}
template<typename T>
T lcm(T a, T b) { T start = max(a, b); T end = a*b; for (T i=start; i<end; i++) {	if ( i % a == 0 && i % b == 0 ) { return i;	} } return a*b;}
int countOccr(string &s, string sub) { int occrs=0, pos=0; while ( (pos = s.find(sub, pos)) != string::npos ) { occrs++; pos += sub.length(); } return occrs;}

/* Algorithm:-
1) mark fav elem, fav = a[f-1]
2) sort in desc order
3) loop thru a, find first occ and last occ of fav in a
4) if k >= last_occ, YES
   if k < first_occ, NO
   else MAYBE
*/

void solve() {
	int n, f, k;
	cin >> n >> f >> k;
	vector<int> a;
	for (int i=0; i<n; i++) {
		int x; cin >> x;
		a.push_back(x);
	}
	int fav = a[f-1];
	sort(a.begin(), a.end(), greater<int>());
	int first_occ = -1, last_occ = -1;
	for (int i=0; i<n; i++) {
		if (a[i] == fav) {
			if (first_occ == -1)
				first_occ = i+1;
			else
				last_occ = i+1;
		}
	}


	if (last_occ == -1) {
		if (k >= first_occ) {
			cout << "YES\n";
			return;
		}
		else {
			cout << "NO\n";
			return;
		}
	}

	if ( k >= last_occ )
		cout << "YES\n";
	else if ( k < first_occ )
		cout << "NO\n";
	else
		cout << "MAYBE\n";
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
