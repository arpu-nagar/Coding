#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

vector<vector<int>> g;
vector<int> v, vis;

void bfs(int node)
{

    priority_queue<int, vector<int>, greater<int>> q;

    q.push(node);
    vis[node] = 1;

    while (!q.empty())
    {
        int node = q.top();
        q.pop();
        v.push_back(node);

        for (int child : g[node])
            if (!vis[child])
                vis[child] = 1, q.push(child);
    }
}

int main()
{
    int n, m, a, b;
    cin >> n >> m;
    g.assign(n + 1, vector<int>());
    vis.assign(n + 1, 0);
    while (m--)
    {
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
        sort(g[i].begin(), g[i].end());
    bfs(1);
    for (int i : v)
        cout << i << " ";
}