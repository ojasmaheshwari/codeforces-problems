#include <bits/stdc++.h>

using namespace std;

int main() {
	pair<int, int> p1 = {1, 99};
	pair<int, int> p2 = {2, 3};

	auto p3 = min(p1, p2);
	cout << p3.first << ' ' << p3.second << '\n';
	return 0;
}