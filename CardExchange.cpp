#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(vector<int> &cards, int n, int k) {
    vector<int> freq;
    for (int card : cards) {
	int cnt = count(cards.begin(), cards.end(), card);
	freq.push_back(cnt);
    }
    int most_freq = *max_element(freq.begin(), freq.end());
    if (most_freq >= k) {
	cout << k-1 << '\n';
    }
    else {
	cout << n << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    vector<int> cards;
    cin >> t;
    while (t--) {
	int n, k;
	cin >> n >> k;
	for(int i=0; i<n; i++) {
	    int x;
	    cin >> x;
	    cards.push_back(x);
	}
	solve(cards, n, k);
	cards.clear();
    }
    return 0;
}
