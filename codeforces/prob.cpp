#include <bits/stdc++.h>
using namespace std;

int printNcR(int n, int r)
{

    long long p = 1, k = 1;

    if (n - r < r)
        r = n - r;

    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;

            long long m = __gcd(p, k);


            p /= m;
            k /= m;

            n--;
            r--;
        }

    }

    else
        p = 1;

    return p;
}

int main()
{
    string x;
    string y;
    cin >> x;
    cin >> y;
    int p1, m1, p2, m2;
    p1 = p2 = m1 = m2 = 0;
    double p = 0;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == '+')
            p1++;
        else
        {
            m1++;
        }
    }

    for (int i = 0; i < x.length(); i++)
    {
        if (y[i] == '+')
            p2++;
        else if (y[i] == '-')
        {
            m2++;
        }
    }

    if (p1 - p2 < 0 || m1 - m2 < 0)
    {
        cout << setprecision(9) << p << "\n";
    }
    else if(p1-p2 == 0 && m1-m2 == 0){
        p = 1.0000;
        cout << setprecision(9) << p << "\n";
    }
    else
    {
        cout << setprecision(9) << (printNcR(x.length()-p2-m2,m1-m2)/pow(2,x.length()-p2-m2)) << "\n";
    }

    return 0;
}