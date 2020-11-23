
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
    int n;
    cin >> n;
    vi a(n);
    inv(a);
    ll s = 0;
    for (auto x : a)
        s += x;
    int o, e;
    o = e = 0;
    for (auto x : a)
    {
        if (x % 2)
            o++;
        else
            e++;
    }
    if (s % 2)
    {
        cout << o << endl;
    }
    else
    {
        cout << e << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t = 1;
    //cin >> t;

    while (t--)
        solve();
    return 0;
}
