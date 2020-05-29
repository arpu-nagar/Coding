
#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main()
{
    ll T, h, c, t, result;
    double t1, t2, t3;
    ll minimus = 0;
    cin >> T;

    while (T--)
    {
        cin >> h >> c >> t;

        t1 = h;
        t2 = 1.0 * (h + c) / 2;

        ll n1 = 1; 
        double dt1 = INT_MAX;
        int ok = 0;
        cout << "here " << endl;
        for(int n = 1;; n += 2)
        {
            double tavg = 1.0 * (n * (h + c) + h) / (2 * n + 1);
            double temp = abs(t - tavg);
            if (temp > dt1)
            {
                ok =1;
                break;
            }
            dt1 = temp;
            n1 = 2 * n + 1;
        }
        cout << "here "<< endl;
        t3 = dt1;

        minimus = INT_MAX;
        double dt = INT_MAX;
        if (abs(t - t1) < dt)
        {
            dt = abs(t - t1);
            minimus = 1;
        }
        if (abs(t - t2) < dt)
        {
            dt = abs(t - t2);
            minimus = 2;
        }

        if (abs(t - t3) < dt)
        {
            dt = abs(t - t2);
            minimus = n1;
        }

        cout << minimus << "\n";
    }

    return 0;
}