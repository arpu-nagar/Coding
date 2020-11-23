#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    ll prev = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ll tot = prev + x;
        if (i == 0)
        {
            if (tot < k)
            {
                prev = tot;
            }
            else
            {
                prev = tot % k;
                ans += (tot / k);
            }
        }
        else
        {
            if (tot < k)
            {
                if (prev == 0)
                {
                    prev = tot;
                }
                else
                {
                    prev = 0;
                    ans++;
                }
            }
            else
            {
                prev = tot % k;
                ans += (tot / k);
            }
        }
    }
    if (prev)
        ans++;

    cout << ans << endl;

    return 0;
}