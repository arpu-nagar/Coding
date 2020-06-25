
#include<bits/stdc++.h>
using namespace std;
int main()
{
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   int n;
   cin >> n;
   vector<int> a(n);
   for(auto &it : a) cin >> it;
   sort(a.begin(),a.end());
   for(auto &it : a) cout << it << " ";
}
