#include <bits/stdc++.h>
using ll = long long int;
#define pb push_back;
#define N 2e5;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);

        for (auto &i : arr)
            cin >> i;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > k)
            {
                ans += arr[i] - k;
            }
        }
        cout << ans << endl;
    }
}