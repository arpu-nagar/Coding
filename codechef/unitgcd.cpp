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
        int count = round(n / 2);
        if(n==1)
        cout << "1" << endl;
        else
        cout << count << endl;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                cout << "2 " << i + 1 << " " << i + 2;
                cout << "\n";
            }
        }
        else
        {
            if (n == 1)
                cout << "1 1" << endl;
            else
            {
                cout << "3 1 2 3" << endl;
                for (int i = 3; i < n; i += 2)
                {
                    cout << "2 " << i + 1 << " " << i + 2;
                    cout << "\n";
                }
            }
        }
    }
}