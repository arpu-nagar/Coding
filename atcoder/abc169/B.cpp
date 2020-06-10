#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define N 2e5

int main()
{
    int n;
    cin >> n;
    ll p = 1;
    int ok = 1;
    while (n--)
    {
        ll t;
        cin >> t;
        if ((log(p) * 1.0) / log(10) + (log(t) * 1.0) / log(10) > 18)
        {
            ok = 0;
        }
        p = p * t;
        if (p > 1000000000000000000)
        {
            ok = 0;
        }
        if (t == 0)
        {
            ok = 1;
            break;
        }
    }
    if (p > 1000000000000000000)
    {
        ok = 0;
    }
    if (ok == 1)
        cout << p << endl;
    else
    {
        cout << "-1\n";
    }
}