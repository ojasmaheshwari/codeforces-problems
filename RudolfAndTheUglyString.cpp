#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define umap unordered_map

int countOccr(string &s, string sub) {
  int occrs=0, pos=0;
  while ( (pos = s.find(sub, pos)) != string::npos ) {
    occrs++;
    pos += sub.length();
  }
  return occrs;
}

void solve() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  int cnt=0;
  cnt += countOccr(s, "map") + countOccr(s, "pie") - countOccr(s, "mapie");
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
