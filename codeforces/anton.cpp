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
        vector<int> v;
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << endl;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v1.push_back(x);
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << v1[i] << " ";
        // }
        // cout << endl;
        int o, m = 0;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (v1[i] > v[i])
            {
                if (o == 0)
                {
                    flag = 0;
                    break;
                }
            }
            else if (v[i] > v1[i])
            {
                if (m == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (v[i] == -1)
                m = 1;
            if (v[i] == 1)
                o = 1;
        }

        if (flag == 0)
            cout << "NO"
                 << "\n";
        else
        {
            cout << "YES"
                 << "\n";
        }
    }
    return 0;
}