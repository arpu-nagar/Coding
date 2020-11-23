#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
      cin >> it;
    set<int> s;
    for (auto &x : a)
      s.insert(x);
    if (s.size() == n)
      cout << "NO" << '\n';
    else
      cout << "YES" << endl;
  }
  return 0;
}