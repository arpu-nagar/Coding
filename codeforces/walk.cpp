#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void test_case()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;

    for (int k = 1 << 9; k >= 0; k--)
    {
        for (int i = 0; i < n; i++)
        {
            int c = 0;
            for (int j = 0; j < m; j++)
            {
                if (((a[i] & b[j]) | k) == k)
                {
                    c++;
                }
            }
            if (c == m)
            {
                cout << k << endl;
                return;
            }
        }
    }
}

int main()
{
    int t;
    t = 1;
    while (t--)
    {
        test_case();
    }

    return 0;
}