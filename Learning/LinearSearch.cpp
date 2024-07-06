#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> &arr, int s) {
    for (int i=0; i<arr.size(); i++) {
	if (arr[i] == s) {
	    return i;
	}
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n, x;
    cin >> n;
    vector<int> arr;
    for (int i=0; i<n; i++) {
	cin >> x;
	arr.push_back((int)x); 
    }
    int s;
    cin >> s;
    cout << linearSearch(arr, s) << '\n';
    return 0;
}
