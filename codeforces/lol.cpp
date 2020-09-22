
// author: arpunagar

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<bool> vb;
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

const int mN = 1e6 ;
bool vis[mN];
vector<vl> g;
vl c;
vl dp;
vl parent;
ll n, k, r;
multiset<ll> at[mN];

void dfs1(int ver)
{
    vis[ver] = 1;
    for (auto i : g[ver])
    {
        if (vis[i])
            continue;
        dfs1(i);
        parent[i] = ver;
        if (dp[i] != -1)
            dp[ver] = max(dp[ver], dp[i] + 1);
    }
    if (c[ver] == 1)
        dp[ver] = max(dp[ver], 0ll);
}

void dfs2(int ver)
{
    vis[ver] = 1;
    if (ver == 1)
    {
        for (auto i : g[ver])
        {
            if (dp[i] != -1)
                at[ver].insert(dp[i] + 1);
        }
        if (c[ver])
            at[ver].insert(0);
        for (int i : g[ver])
            dfs2(i);
    }
    else
    {
        for (auto it : g[ver])
        {
            if (it == parent[ver])
            {
                ll rem = -1;
                if (dp[ver] != -1)
                {
                    rem = dp[ver] + 1ll;
                }
                if (rem == -1)
                {
                    at[ver].insert((*(at[it].rbegin())) + 1);
                }
                else
                {
                    if (at[it].size() == 1)
                    {
                    }
                    else
                    {
                        auto iter = at[it].rbegin();
                        if ((*iter) == rem)
                            iter--;
                        at[ver].insert((*iter) + 1);
                    }
                }
            }
            else
            {
                if (dp[it] != -1)
                    at[ver].insert(dp[it] + 1);
            }
        }
        if (c[ver])
            at[ver].insert(0);
        for (auto it : g[ver])
        {
            if (vis[it])
                continue;
            dfs2(it);
        }
    }
}

void solve()
{
    cin >> n >> k >> r;
    g.resize(n + 2);
    parent.resize(n + 2);
    c.resize(n + 2);
    dp.resize(n + 2);
    for (int i = 0; i < k; i++)
    {
        ll c1;
        cin >> c1;
        c[c1] = 1;
    }

    for (int i = 1; i <= n - 1; i++)
    {
        ll a, b;
        cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
    }
    if (r == 0)
    {
        if (k == 1)
            cout << 1 << endl;
        else
            cout << 0 << endl;
        return;
    }
    if (k == n && r >= n - 2)
    {
        cout << n << endl;
        return;
    }
    else if(k == n && r < n-2)
    {
        cout << 0 << endl;
        return;
    }
    memset(vis, false, sizeof(vis));
    dfs1(1);
    memset(vis, false, sizeof(vis));
    dfs2(1);
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (((*at[i].rbegin()) <= r))
            ans++;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    //cin >> t;
    while (t--)
        solve();

    return 0;
}