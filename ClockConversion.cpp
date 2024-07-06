#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(string &t24) {
    int hours = stoi(t24.substr(0, 2));
    int hours12;
    string suffix;
    if (hours >= 12 && hours <= 24) {
	suffix = "PM";
	if (hours == 12)
	    hours12 = hours;
	else
	    hours12 = hours - 12;
    }
    else if (hours == 0) {
	suffix = "AM";
	hours12 = 12;
    }
    if (hours > 0 && hours < 12) {
	suffix = "AM";
	hours12 = hours;
    }
    if (hours12 >= 0 && hours12 <= 9) {
	cout << '0';
    }
    cout << hours12 << t24.substr(2, 3) << ' ' << suffix << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
	string t24;
	cin >> t24;
	solve(t24);
    }
    return 0;
}
