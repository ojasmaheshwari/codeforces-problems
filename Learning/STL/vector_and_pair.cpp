#include <bits/stdc++.h>

using namespace std;

void printVec(vector<int> &v) {
    for(auto i : v) {
	cout << i << '\n';
    }
}

void printMap(vector<pair<int, string>> &map) {
    for (auto m : map) {
	cout << m.first << ' ' << m.second << '\n';
    }
}

void takingInputInVector() {
    // Taking input of vector
    int n;
    vector<int> v;
    cin >> n;
    while(n--) {
	int x;
	cin >> x;
	v.push_back(x);
    }

    printVec(v);
}

void oneToOneMapping() {
    vector<pair<int, string>> map;
    map = {
	{1, "ojas"},
	{2, "akash"},
	{3, "prabhdeep"},
	{4, "arun"}
    };
    printMap(map);
    // Make arun to 2 and akash to 4
    swap(map[1].second, map[3].second);
    printMap(map);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    oneToOneMapping();

    return 0;
}
