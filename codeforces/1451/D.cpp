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
ll x1;
bool cmp(pair<ll, ll> &a,
         pair<ll, ll> &b)
{
    return a.second >= b.second;
}

void sort(map<ll, ll> &M)
{
    vector<pair<ll, ll>> A;
    for (auto &it : M)
    {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    vector<ll> ans;
    ll a = 0;
    for (auto x : A)
    {
        if (a == 0)
        {
            if (x.se == 1)
            {
                cout << 1 << endl;
                cout << x1 << endl;
                return;
            }
            else
                for (int i = 1; i < x.se; i++)
                {
                    ans.pb(x.fi);
                    a = x.fi;
                }
        }
        else
        {
            for (int i = 0; i < x.se; i++)
                a *= x.fi;
        }
    }
    ans.pb(a);
    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << ' ';
    cout << endl;
}

void solve()
{
    int64_t n;
    cin >> n;
    ll x = n;
    x1 = n;
    map<ll, ll> mp;
    int c = 0;
    while (n % 2 == 0)
    {
        mp[2]++;
        c++;
        n /= 2;
    }

    for (int i = 3; i <= sqrt(x); i = i + 2)
    {
        while (n % i == 0)
        {
            mp[i]++;
            c++;
            n = n / (i * 1ll);
        }
    }
    if (n >= 2)
        mp[n]++, c++;
    if (c == 0)
    {
        cout << 1 << endl;
        cout << x << endl;
        return;
    }
    for (auto x : mp)
    {
        if (x.se == c)
        {
            cout << c << endl;
            for (int i = 0; i < c; i++)
                cout << x.fi << ' ';
            cout << endl;
        }
        else
        {
            sort(mp);
            return;
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