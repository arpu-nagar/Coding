
// author: arpunagar

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
#define inv(v)         \
    for (auto &it : v) \
        cin >> it;
#define MOD 1000000007
#define pb push_back
#define popb pop_back()
#define endl "\n"
#define fi first
#define se second
#define ar array
typedef priority_queue<ll, vector<ll>, greater<ll>> minheap;
typedef priority_queue<ll> maxheap;
#define sortv(v) sort(v.begin(), v.end())
#define db(x) cout << (#x) << " is " << (x) << endl;
#define rsortv(v) sort(v.begin(), v.end(), greater<>());

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

void solve()
{
    long long n;
    cin >> n;

    ll mx = 0;
    ll bs = 1;
    while (mx <= n + n - 1)
    {
        mx = mx * 10 + 9;
        bs *= 10;
    }

    mx /= 10;
    bs /= 10;

    if (mx == 0)
    {
        cout << n * (n - 1) / 2;
        return;
    }

    ll pre = 0;
    ll ans = 0;
    while (1)
    {
        ll t = pre * bs + mx;
        if (t > n + n - 1)
            break;
        if (t <= n)
            ans += t / 2;
        else
        {
            if (t / 2 >= t - n)
                ans += (t / 2) - (t - n) + 1;
        }
        ++pre;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t = 1;
    cin >> t;

    while (t--)
        solve();
    return 0;
}
