#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        int m1, m2;
        m1 = m2 = -1;
        for (int i = 0; i < k1; i++)
        {
            int p;
            cin >> p;
            if (p >= m1)
            {
                m1 = p;
            }
        }

        for (int i = 0; i < k2; i++)
        {
            int p;
            cin >> p;
            if (p >= m2)
            {
                m2 = p;
            }
        }

        if (m1 > m2)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
}