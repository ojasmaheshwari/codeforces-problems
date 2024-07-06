#include <bits/stdc++.h>

using namespace std;

string diffstring(string &s) {
    string cs = s;
    int rand_no_1 = rand() % s.length();
    int rand_no_2 = rand() % s.length();
    char temp = s[rand_no_1];
    cs[rand_no_1] = cs[rand_no_2];
    cs[rand_no_2] = temp;
    if (cs != s) {
	return cs;
    }
    return diffstring(s);
}

void solve(string &s) {
    if (s.length() == 1) {
	cout << "NO\n";
	return;
    }
    char c = s[0];
    int match_cnt = 0;
    for (int i=0; i<s.length(); i++) {
	if (s[i] == c) {
	    match_cnt++;
	}
    }
    if (match_cnt == s.length()) {
	cout << "NO\n";
	return;
    }
    cout << "YES\n";
    cout << diffstring(s) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    string s;
    while(t--){
	cin >> s;
	solve(s);
    }
    return 0;
}
