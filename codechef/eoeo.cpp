#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define pb push_back;
#define N 2e5;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll ts;
        cin >> ts;
        ll temp = ts;
        int ok = 1;
        int s = 0;

        while (ok == 1 && temp != 0)
        {
            if (temp % 2 == 1)
            {
                ok = 0;
            }
            else
            {
                s++;
            }
            temp /= 2;
        }
        s++;
        ll ans = (ll)ts / (ll)pow(2, s);
        cout << ans << endl;
    }
}