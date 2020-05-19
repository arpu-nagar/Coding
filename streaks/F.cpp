#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int gcd1(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
        return (b, a % b);
}

void solve()
{
    int a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    int agcd = gcd1(a, b);
    for (int i = 0; i < n; i++)
    {
        int gcd = -1;
        int lb, ub;
        cin >> lb >> ub;
        for (int j = lb; j <= ub; j++)
        {
            if (j * j <= agcd)
            {
                if (agcd % j == 0)
                {
                    gcd = max(j,max(agcd/j,gcd));
                }
            }
        }
        cout << gcd << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}
