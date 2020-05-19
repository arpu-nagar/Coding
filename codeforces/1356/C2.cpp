#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        double n;
        cin >> n;
        double kkk = 4 * n;
        double zzz = (1 / sin((3.141592653) / kkk));
        if (n == 2)
        {
            zzz = 1;
            cout << "1.000000000"
                 << "\n";
        }
        else
        {

            cout << fixed << setprecision(9) << (double)zzz / 2 << "\n";
        }
    }
}