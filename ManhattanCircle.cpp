// Template and code by Ojas Maheshwari

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define umap unordered_map
#define v vector

const int INF = 1e9;

template <typename T> T gcd(T a, T b) {
  T curr = 1;
  for (T i = 1; i <= b; i++) {
    if (a % i == 0 && b % i == 0) {
      curr = i;
    }
  }
  return curr;
}
template <typename T> T lcm(T a, T b) {
  T start = max(a, b);
  T end = a * b;
  for (T i = start; i < end; i++) {
    if (i % a == 0 && i % b == 0) {
      return i;
    }
  }
  return a * b;
}
int countOccr(string &s, string sub) {
  int occrs = 0, pos = 0;
  while ((pos = s.find(sub, pos)) != string::npos) {
    occrs++;
    pos += sub.length();
  }
  return occrs;
}
template <typename T> void tvi(v<T> &a, int n) {
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
}
template <typename T> void pv(v<T> &a) {
  for (auto &i : a) {
    cout << i << ' ';
  }
  cout << '\n';
}

void solve() {
  int n, m;
  cin >> n >> m;
  v<v<char>> g(n, v<char>(m));
  pair<int, int> top = {INF, INF};
  pair<int, int> bottom = {-INF, -INF};

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> g[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (g[i][j] == '#') {
        top = min(top, {i, j});
        bottom = max(bottom, {i, j});
      }
    }
  }

  cout << (top.first + bottom.first) / 2 + 1 << ' ' << top.second + 1 << '\n';
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
