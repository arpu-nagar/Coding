#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
  char g[323][31];
  for (int i = 0;i < 323;i++) {
    for (int j = 0;j < 31;j++) {
      cin >> g[i][j];
    }
  }
  vector<pair<int, int>> a;
  a.push_back({ 1,1 });
  a.push_back({ 3,1 });
  a.push_back({ 5,1 });
  a.push_back({ 7,1 });
  a.push_back({ 1,2 });
  long long int tot = 1;
  for (auto x : a) {
    int r = 0, c = 0;
    int ans = 0;
    for (int i = 0;c < 323;i++) {
      if (g[c][r] == '#') ans++;
      r += x.first;
      c += x.second;
      r %= 31;
    }
    tot *= ans;
  }
  cout << tot;
  return 0;
}