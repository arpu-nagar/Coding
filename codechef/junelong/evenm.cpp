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
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i % 2 == 0)
                    {
                        cout << i * n + j + 1 << " ";
                    }
                    else
                    {
                        cout << i * n + (n - j) << " ";
                    }
                }
                cout << "\n";
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {

                    cout << i * n + j + 1 << " ";
                }
                cout << "\n";
            }
        }
    }
}