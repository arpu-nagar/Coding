#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 4 != 0)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
            for (int i = 1; i <= n; i++)
            {
                if (i <= n / 2)
                {
                    cout << i * 2 << " ";
                }
                else if(i>n/2 && i<n)
                {
                    cout << (((i - n / 2) * 2) -1) << " ";
                }
                else if(i==n)
                {
                    cout << (((i - n / 2) * 2) + (n)/2 -1) << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}