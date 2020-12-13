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

ll fact(int n)
{
    ll p = 1;
    for (int i = 1; i <= n; i++)
        p *= i * 1ll;
    return p;
}

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    inv(a);
    set<int> s;
    for (auto &x : a)
        s.insert(x);
    if (s.size() == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (s.size() == n)
    {
        cout << 1 << endl;
        return;
    }
    map<int, int> mp;
    mp[a[0]]++;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
            mp[a[i]]++;
    }
    if (mp[a[0]] == 1)
    {
        cout << 1 << endl;
        return;
    }
    else if (mp[a[n - 1]] == 1)
    {
        cout << 1 << endl;
        return;
    }
    else if (a[0] == a[n - 1])
    {
        int mx = 1e9;
        for (auto x : mp)
        {
            mx = min(mx, x.se);
        }
        cout << min(mp[a[0]] - 1, mx + 1) << endl;
    }
    else
    {
        int mx = 1e9;
        for (auto x : mp)
        {
            mx = min(mx, x.se);
        }
        if (mp[a[0]] == mx || mp[a[n - 1]] == mx)
            cout << mx << endl;
        else
        {
            cout << mx + 1 << endl;
        }
    }
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