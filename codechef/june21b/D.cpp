#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
const int mod = int(1e9) + 7;

ll nCr(ll n, ll r)
{
    ll res = 1;
    if (r > n - r)
    {
        r = n - r;
    }
    for (int i = 0; i < r; i++)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

ll fact(int n) {
    ll p = 1;
    for (int i = 1; i <= n; i++)
        p *= i * 1ll;
    return p;
}

ll power(ll x, ll  y)
{
    int res = 1;     // Initialize result

    x = x % mod; // Update x if it is more than or
                // equal to p

    if (x == 0) return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % mod;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % mod;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        ll n, m; cin >> n >> m;
        // 2^n - 1 * m
        ll ans = 2 * power(2, n - 1) - 1;
        cout << power(ans, m) << '\n';
    }
}