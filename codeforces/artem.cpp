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
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (j % 2 == 0)
                    cout << "B";
                else
                {
                    cout << "W";
                }
            }
            cout << endl;
        }
        cout << "B";
        if (n % 2 == 0)
            cout << "B";
        else
        {
            cout << "W";
        }

        for (int j = 2; j < m; j++)
        {
            if (j % 2 == 0)
                cout << "W";
            else
            {
                cout << "B";
            }
        }
        cout << endl;
    }
    return 0;
}