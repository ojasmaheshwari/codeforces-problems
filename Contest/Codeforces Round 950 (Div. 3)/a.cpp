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
1) create map of counts
2) m freq of each diff is required
3) loop thru map, check if map.second < m
	if yes then ans += m - map.second
	if no, continue
*/

void solve() {
	int n, m;
	cin >> n >> m;
	string b; cin >> b;
	umap<char, int> map;
	int ans=0;
	if (b.find('A') == string::npos){
		map['A'] = 0;
	}
	if (b.find('B') == string::npos){
		map['B'] = 0;
	}
	if (b.find('C') == string::npos){
		map['C'] = 0;
	}
	if (b.find('D') == string::npos){
		map['D'] = 0;
	}
	if (b.find('E') == string::npos){
		map['E'] = 0;
	}
	if (b.find('F') == string::npos){
		map['F'] = 0;
	}
	if (b.find('G') == string::npos){
		map['G'] = 0;
	}
	for (char c: b) {
		map[c]++;
	}
	for (auto &it : map) {
		if (it.second < m) {
			ans += (m - it.second);
		}
	}
	cout << ans << '\n';
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
