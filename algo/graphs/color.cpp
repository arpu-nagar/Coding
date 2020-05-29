#include <bits/stdc++.h>
using ll = long long int;
const int N = 1e5 + 3;
int n, color[N];
using namespace std;
vector<int> adj[N];
int dfs(int u, int a)
{
    int res = 0;
    if (color[u] != a)
    {
        a = color[u], res++;
    }
        for (auto v : adj[u])
            res += dfs(v, a);
        return res;
    
}

void solve()
{
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int v;
        cin >> v;
        adj[--v].push_back(i);
    }
    for (int i = 0; i < n; i++)
        cin >> color[i];

    cout << dfs(0, 0) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}