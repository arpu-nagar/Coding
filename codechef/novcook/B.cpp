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
    string s;
    string x;
    cin >> s;
    cin >> x;
    // if (s == x)
    // {
    //     cout << 0 << endl;
    //     return;
    // }
    int ans = 0;
    int cur = -1;
    int mx = 0;
    vi a(s.size() + 1, 0);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != x[i])
            a[i] = 1;
    }
    int ok = 0;
    for (int i = 0; i < s.size(); i += 2)
    {
        if (a[i])
        {
            ok = 1;
            continue;
        }
        else
        {
            if (ok)
                ans++;
            ok = 0;
        }
    }
    if (ok)
        ans++;
    ok = 0;
    for (int i = 1; i < s.size(); i += 2)
    {
        if (a[i])
        {
            ok = 1;
            continue;
        }
        else
        {
            if (ok)
                ans++;
            ok = 0;
        }
    }
    if (ok)
        ans++;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}