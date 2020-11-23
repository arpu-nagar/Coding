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
int n, m;
int arr[1001][1001];
bool vis[1001][1001];
int dfs(int x, int y)
{
    if (vis[x][y])
        return 0;
    if (x < n && x > -1 && y < m && y > -1)
    {
        vis[x][y] = 1;
        if (arr[x][y] == 1)
        {
            return 1 + dfs(x + 1, y) + dfs(x - 1, y) + dfs(x, y + 1) + dfs(x, y - 1);
        }
        else
        {
            return 0;
        }
    }
    else
        return 0;
}

void solve()
{
    cin >> n >> m;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
                c++;
        }
    }

    if (c == n * m)
    {
        cout << n * m << endl;
        return;
    }

    if (c == 0)
    {
        cout << 1 << endl;
        return;
    }

    if (c == 1)
    {
        cout << 2 << endl;
        return;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 1)
            {
                memset(vis, false, sizeof(vis));
                ans = max(ans, 1 + dfs(i, j));
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}