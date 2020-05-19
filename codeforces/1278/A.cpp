#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    string x;
    cin >> x;
    vector<int> arr(26);
    string s;
    cin >> s;
    for (int i = 0; i < x.length; i++)
    {
        arr[(int)x[i] - 48]++;
    }

    int ans = 1;
    for (int i = 0; i < s.length; i++)
    {
        
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}