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
        int max1 = -1;
        for (auto &i : arr)
        {
            cin >> i;
            max1 = max(max1, i);
        }
        sort(arr.begin(), arr.end());
        int c = 0;
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
                }
    }
}