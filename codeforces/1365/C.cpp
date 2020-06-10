#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n), v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].second;
    }
    v1 = v;
    sort(v1.begin(), v1.end());
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (v1[i].first != v[i].first)
        {
            c++;
        }
    }
    if (c == 0)
        cout << "Yes" << endl;
    else
    {
        int c1, c2;
        c1 = c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i].second == 1)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        if (c1 != 0 && c2 != 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    // if (c == 0)
    // {
    //     cout << "Yes" << endl;
    // }
    // else
    // {
    //     int c = 0;
    //     for (int i = 0; i < n - 1; i++)
    //     {
    //         int k, pos, l;
    //         k = v[i].first, pos = i;
    //         l = v[i].second;
    //         for (int j = i + 1; j < n; j++)
    //         {
    //             if (k > v[j].first && v[i].second != v[j].second)
    //             {
    //                 k = v[j].first;
    //                 pos = j;
    //                 l = v[j].second;
    //             }
    //         }
    //         int t = v[i].first;
    //         v[i].first = k;
    //         v[pos].first = t;
    //         int x = v[i].second;
    //         v[i].second = l;
    //         v[pos].second = x;
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (v1[i].first != v[i].first)
    //         {
    //             c = 1;
    //         }
    //     }
    //     if (c == 0)
    //     {
    //         cout << "Yes" << endl;
    //     }
    //     else
    //     {
    //         cout << "No" << endl;
    //     }
    // }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}