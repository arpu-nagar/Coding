#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    sort(a.begin(), a.end(), greater<int>());
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[j] + a[k] > a[i])
                {
                    cout << "YES" << endl;
                    cout << a[i] << ' ' << a[j] << ' ' << a[k] << endl;
                    return 0;
                }
                else
                {
                    k = n, j = n - 1;
                }
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}