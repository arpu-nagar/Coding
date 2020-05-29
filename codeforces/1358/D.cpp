#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve()
{
    ll n, x;
    cin >> n >> x;
    ll arr[n] = {0};
    ll max = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    ll ans = 0;
    if (x <= max)
    {
        ans = (max * (max + 1)) / 2 - ((max - x) * (max - x + 1)) / 2;
    }
    else
    {
        ll pre[n + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            pre[i + 1] = pre[i] + arr[i];
        }
        deque<ll> m;
        for (int i = 0; i < n + 1; i++)
        {
            while (!m.empty() && pre[i] <= pre[m.back()])
                m.pop_back();

            while (!m.empty() && pre[i] >= pre[m.front()])
                m.pop_front();

                m.push_back(i);
        }
        int a[n] = {0};
        for(int i=0;i<m.size();i++){
            a[i] = m.pop_front();
        }
        
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}