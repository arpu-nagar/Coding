#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].second;
            cin >> arr[i].first;
        }
        sort(arr.begin(), arr.end());
        ll ans = arr[n - 1].first;
        int e = arr[n - 1].second;
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i].second != e)
            {
                ans += arr[i].first;
                break;
            }
        }
        cout << ans << endl;
    }
}