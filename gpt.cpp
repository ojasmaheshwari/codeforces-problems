#include <iostream>
#include <vector>

using namespace std;

void colorArray(int t, vector<pair<int, vector<int>>>& testCases) {
    for (int i = 0; i < t; ++i) {
        int n = testCases[i].first;
        vector<int>& arr = testCases[i].second;
        
        // Check if it's possible to color the array
        bool possible = true;
        for (int j = 1; j < n - 1; ++j) {
            if (arr[j] == arr[j - 1] || arr[j] == arr[j + 1]) {
                possible = false;
                break;
            }
        }

        // Output the result
        if (possible) {
            cout << "YES" << endl;
            for (int j = 0; j < n; ++j) {
                if (j % 2 == 0) {
                    cout << "R";
                } else {
                    cout << "B";
                }
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    int t;
    cin >> t; // Number of test cases
    vector<pair<int, vector<int>>> testCases;
    
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n; // Length of the array
        vector<int> arr(n);
        for (int j = 0; j < n; ++j) {
            cin >> arr[j]; // Array elements
        }
        testCases.push_back(make_pair(n, arr));
    }

    colorArray(t, testCases);

    return 0;
}

