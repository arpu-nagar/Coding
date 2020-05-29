#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

void solve()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    ll price = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int s1, s2;
        s1 = s2 = 0;
        int c = 0;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '.')
            {
                c++;
            }
            else
            {
                s2 += c / 2;
                s1 += c % 2;
                c=0;
            }
        }
        s2 += c / 2;
        s1 += c % 2;
        c = 0;
        if (2 * x <= y)
        {
            price+=(s1+s2*2)*x;
        }
        else
        {
            price+= s1*x + s2*y;
        }
        // cout << "test:" << price << endl;
    }
    cout << price << "\n";
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