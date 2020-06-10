#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n << endl;
    int ok = 0;
    char x;
    cin >> x;
    int lies = 0;
    if (x != 'E')
    {
        if (x == 'G')
        {
            lies = 1;
        }
        if (lies == 1)
        {
            int lb = 1;
            int ub = n;
            cout << lb << endl;
            cin >> x;
            int count = 0;
            if (x != 'E')
            {
                count++;
                int ok = 0;
                char p = x;
                while (ok != 1)
                {
                    int mid = (lb + ub + 1) / 2;
                    if (p == 'E')
                    {
                        ok = 1;
                        continue;
                    }

                    if (count % 2 == 1)
                    {
                        if (p == 'L')
                        {
                            ub = mid - 1;
                        }
                        else if (p == 'G')
                        {
                            lb = mid + 1;
                        }
                        count++;
                    }
                    else
                    {
                        count++;
                    }
                    cout << mid << endl;
                    cin >> p;
                }
            }
        }
        else
        {
            int lb = 1;
            int ub = n;
            cout << lb << endl;
            cin >> x;
            int count = 0;
            if (x != 'E')
            {
                count++;
                int ok = 0;
                char p = x;
                while (ok != 1)
                {
                    int mid = (lb + ub + 1) / 2;
                    if (p == 'E')
                    {
                        ok = 1;
                        continue;
                    }

                    if (count % 2 != 1)
                    {
                        if (p == 'G')
                        {
                            lb = mid + 1;
                        }
                        else if (p == 'L')
                        {
                            ub = mid - 1;
                        }
                        count++;
                    }
                    else
                    {
                        count++;
                    }
                    cout << mid << endl;
                    cin >> p;
                }
            }
        }
    }

    return 0;
}