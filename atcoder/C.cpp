#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    int arr[1000] = {0};

    for (int i = 0; i < n; i++)
    {
        arr[v[i] - 1]++;
    }

    int e, o;
    e = o = 0;
    for (int i = 0; i < 100; i++)
    {
        if ((i + 1) % 2 == 0)
        {
            e += arr[i];
        }
        else
        {
            o += arr[i];
        }
    }
    if (o % 2 == 0 && e % 2 == 0)
        cout << "YES" << endl;
    else
    {
	int p = 0;
        for (int i = 0; i <= 99; i++)
        {
            if (arr[i] >= 1 && arr[i + 1] >= 1)
            {
                p=1;
            }
        }
        if (p==1)
            cout << "YES" << endl;
            else
            {
                cout << "NO" << endl;
            }
            
    }
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
