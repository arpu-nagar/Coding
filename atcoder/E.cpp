#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define fi first
#define se second
#define pb push_back
#define nn "\n"
#define all(p) p.begin(), p.end()
#define zz(v) (ll) v.size()
#define S(a) scanf("%lld", &a)
#define SS(a, b) scanf("%lld %lld", &a, &b)
#define SSS(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)
#define ss ' '
#define pii pair<ll, ll>
const double eps = 1e-8;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        ll f = 1;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (s[i][j] == '1')
                {
                    ll k = 1, k1 = 1;
                    for (ll x = i + 1; x < n; x++)
                    {
                        if (s[x][j] != '1')
                            k = 0;
                        else
                        {
                            break;
                        }
                    }

                    for (ll x = j + 1; x < n; x++)
                    {
                        if (s[i][x] != '1')
                            k1 = 0;
                        else
                        {
                            break;
                        }
                    }
                    if (k != 1 && k1 != 1)
                        f = 0;
                    //  cout<<s[i][j]<<ss;
                }
                // cout<<nn;
            }
        }

        if (f)
            cout << "YES" << nn;
        else
            cout << "NO" << nn;
    }
}
