#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll x, k;
        cin >> x >> k;
        int c = 1;
        if (k > x)
            c = 0;
        else
        {
            int co = 0;
            while (x % 2 == 0)
            {
                co++;
                x = x / 2;
            }
            for (int i = 3; i <= sqrt(x); i = i + 2)
            {
                
                while (x % i == 0)
                {
                    co++;
                    x= x / i;
                }
            }
            if (x > 2)
            co++;
            if(co >=k)
            c=1;
            else
            {
                c = 0;
            }
        }
        cout << c << "\n";
    }

    return 0;
}