#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(int k, int q, vector<int> &a, vector<int> &n) {
    for (int i=0; i<q; i++) {
	int len_A = n[i], cnt=0;
	string A(len_A, 'A');
	while(cnt != k) {
	    cnt=0;
	    for (int rm_index : a) {
		if (rm_index >= 1 && rm_index <= A.size()) {
		    A.erase(rm_index-1, 1);
		} else {
		    cnt++;
		}
	    }
	}
	cout << A.length() << ' ';
    }
    cout << '\n';
}

int main() {
    int t;
    cin >> t;
    while(t--) {
	int k, q;
	vector<int> a, n;
	cin >> k >> q;
	for (int i=0; i<k; i++) {
	    int x;
	    cin >> x;
	    a.push_back(x);
	}
	for (int i=0; i<q; i++) {
	    int x;
	    cin >> x;
	    n.push_back(x);
	}
	solve(k, q, a, n);
    }
    return 0;
}
