#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    vector<pair<int, int>> arr(b);
    for (int i = 0; i < b; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    map<int, int> mp;
    for (auto x : arr)
    {
        mp[x.first]++;
        mp[x.second]++;
    }
    ll ans = 0;
    for (int i = 0; i < b; i++)
    {
        if (mp[arr[i].first] > 2 && mp[arr[i].second] > 2)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}