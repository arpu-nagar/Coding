#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

bool p(ll n)
{
    return !(n & (n - 1));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a >= b)
        {
            if (p(a / b) && a % b == 0)
            {
                ll x = a / b;
                int c = 0;
                while (x != 1)
                {
                    c++;
                    x /= 2;
                }
                int v = c / 3 + (c % 3) / 2 + ((c % 3) % 2);
                cout << v << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
        else
        {
            if (p(b / a) && b % a == 0)
            {
                ll x = b / a;
                int c = 0;
                while (x != 1)
                {
                    c++;
                    x /= 2;
                }
                int v = c / 3 + (c % 3) / 2 + ((c % 3) % 2);
                cout << v << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }
}