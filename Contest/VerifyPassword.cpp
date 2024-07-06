#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define umap unordered_map

void solve() {
  int n; cin >> n;
  string s; cin >> s;

  int temp;
  bool sort_by_num = false;
  bool sort_by_alpha = false;
  bool special_cond = false;

  for (int i=0; i<n; i++) {
    sort_by_num = true;
    if ( (int)(s[i]) > 57 ) {
      break;
    }
    int curr = (int) (s[i] - '0');
    int next = ((i+1) != n) ? (int) (s[i+1] - '0') : -1;
    if (next != -1) {
      if (next < curr) {
        sort_by_num = false;
        break;
      }
    }
  }

  for (int i=0; i<n; i++) {
    sort_by_alpha = true;
    if ( (int)(s[i]) < 97 ) {
      continue;
    }
    int curr = (int) s[i];
    int next = ((i+1) != n) ? (int) (s[i+1]) : -1;
    if (next != -1) {
      if (next < curr) {
        sort_by_alpha = false;
        break;
      }
    }
  }

  for(int i=0; i<n; i++) {
    special_cond = true;
    if ( (int)s[i] < 97 && i != 0 ) {
      if ( (int)(s[i-1]) > 57 ) {
        special_cond = false;
        break;
      }
    }
  }
  
  if (sort_by_num && sort_by_alpha && special_cond)
    cout << "YES\n";
  else
    cout << "NO\n";

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
