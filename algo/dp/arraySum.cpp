#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &it : a)
    cin >> it;
  int i, j;
  i = j = 0;
  ll max = INT_MIN;
  ll sum = 0;
  while (i < n)
  {
    sum += a[i];
    if (sum > max)
      max = sum;
    if (sum < 0)
      sum = 0;
    i++;
  }
  i = 0;
  ll max1 = INT_MIN;
  ll sum1 = 0;
  sort(a.begin(), a.end());
  while (i < n)
  {
    sum1 += a[i];
    if (sum1 > max1)
      max1 = sum1;
    if (sum1 < 0)
      sum1 = 0;
    i++;
  }
  cout << max << " " << max1 << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}