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
        vector<int> arr(n);

        for (auto &i : arr)
        {
            cin >> i;
        }
        int c, c1, c2;
        c = c1 = 0;
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            if (ans == 0)
                break;
            if (arr[i] == 5)
            {
                c++;
                continue;
            }
            else if (arr[i] == 10)
            {
                if (c == 0)
                {
                    ans = 0;
                    continue;
                }
                else
                {
                    c--;
                    c1++;
                }
            }
            else if (arr[i] == 15)
            {
                if (c1 == 0)
                {
                    if (c >= 2)
                    {
                        c -= 2;
                        continue;
                    }
                    else
                    {
                        ans = 0;
                    }
                }
                else
                {
                    c1--;
                    continue;
                }
            }
        }
        if (ans == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}