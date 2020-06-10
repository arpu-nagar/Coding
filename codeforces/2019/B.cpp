#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &it : arr)
        {
            cin >> it;
        }
        int ok = 0;
        int l;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(arr[i] - arr[i + 1]) >= 2)
            {
                ok = 1;
                l = i;
            }
        }
        if (ok == 1)
        {
            cout << "YES" << endl;
            cout << l + 1 << " " << l + 2 << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}