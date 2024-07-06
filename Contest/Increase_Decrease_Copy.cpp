#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define umap unordered_map

int closest(vector<int> &arr, int n, int target)
{
    int left = 0, right = n - 1;
    while (left < right) {
        if (abs(arr[left] - target)
            <= abs(arr[right] - target)) {
            right--;
        }
        else {
            left++;
        }
    }
    return arr[left];
}

void solve() {
  int n; cin >> n;
  vector<int> a, b;

  for (int i=0; i<n; i++) {
    int x;
    cin >> x;
    a.push_back(x);
  }
  for (int i=0; i<n+1; i++) {
    int x;
    cin >> x;
    b.push_back(x);
  }

  int cnt = 0;

  for (int i=0; i<n; i++) {
    cnt += abs(a[i] - b[i]);
  }

  vector<int> v;
  for (int i=0; i<n; i++) {
    v.push_back(abs(a[i] - b[n]));
  }

  bool did = false;

  for (int i=0; i<n; i++) {
    if ( b[i] < a[i] && b[n] > b[i] && a[i] == v[i] ) {
      cnt += abs(a[i] - b[n]) + 1;
      cnt -= abs(b[n] - b[i]);
      did = true;
      break;
    }
  }

  if (!did) {
    cnt += abs(b[n] - v[0]) + 1; 
  }

  cout << cnt << '\n';
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
