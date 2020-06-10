#include <bits/stdc++.h>
using namespace std;
#define ll long long int;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        int a, b;
        a = b = 0;
        for (int i = 0; i < x.length(); i++)
        {
            if (x[i] >= 'a' || x[i] <= 'z')
            {
                a++;
            }
            else
            {
                b++;
            }
        }

        cout << abs(a - b) << endl;
    }
    return 0;
}