#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int g;
    cin >> g;
    vector<int> a(g);
    for (auto &it : a)
    {
        cin >> it;
    }
    int brr[g] = {0};
    sort(a.begin(), a.end());
    for (int i = 0; i < g; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] % a[j] == 0)
                brr[i] = 1;
        }
    }
    int v;
    cin >> v;
    //lol
    for (int i = 0; i < v; i++)
    {
        ll l, h;
        cin >> l >> h;
        ll ans;
        ans = 0;
        for (int i = 0; i < g; i++)
        {
            ll k = l / a[i];
            ll k1 = h / a[i];
            ll c = 0;
            for (int j = 0; j < i; j++)
            {
                if (brr[j] != 1)
                {
                    ll lcm = (ll)(a[i] * a[j]) / __gcd(a[i], a[j]);
                    if (l % lcm == 0)
                        c += h / lcm - l / lcm + 1;
                    else
                    {
                        c += h / lcm - l / lcm;
                    }
                }
            }
            // cout << a[i] << " " << c << endl;
            if(brr[i] != 1){if (l % a[i] == 0)
                ans += k1 - k - c + 1;
            else
            {
                ans += k1 - k - c;
            }}
        }
        cout << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}