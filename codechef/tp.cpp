#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN = 1e5;
int n, q, c[mxN], dt, ds[mxN], d[mxN], anc[mxN][17];
vector<int> adj[mxN];
ll a[mxN], ans;
set<ar<int, 2>> s[mxN];

void dfs(int u = 0, int p = -1)
{
	ds[u] = dt++;
	anc[u][0] = p;
	for (int i = 1; i < 17; ++i)
		anc[u][i] = ~anc[u][i - 1] ? anc[anc[u][i - 1]][i - 1] : -1;
	for (int v : adj[u])
	{
		if (v == p)
			continue;
		a[v] += a[u];
		d[v] = d[u] + 1;
		dfs(v, u);
	}
}

int lca(int u, int v)
{
	if (d[u] < d[v])
		swap(u, v);
	for (int i = 16; ~i; --i)
		if (d[u] - (1 << i) >= d[v])
			u = anc[u][i];
	if (u == v)
		return u;
	for (int i = 16; ~i; --i)
	{
		if (anc[u][i] ^ anc[v][i])
		{
			u = anc[u][i];
			v = anc[v][i];
		}
	}
	return anc[u][0];
}

void upd(int i, int x)
{
	//find min ancestor which already has c[i]
	int w = -1;
	//before i
	auto it = s[c[i]].lower_bound({ds[i]});
	if (it != s[c[i]].begin())
	{
		--it;
		w = lca(i, (*it)[1]);
		++it;
	}
	//after i
	if (it != s[c[i]].end())
	{
		int w2 = lca(i, (*it)[1]);
		if (w < 0 || d[w2] > d[w])
			w = w2;
	}
	//update ans for path
	ans += x * (a[i] - (~w ? a[w] : 0));
}

void solve()
{
	//input
	cin >> n >> q;
	for (int i = 0; i < n; ++i)
		adj[i].clear();
	for (int i = 1, u, v; i < n; ++i)
	{
		cin >> u >> v, --u, --v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	//dfs for info
	dfs();

	//prepare for queries
	ans = 1;
	for (int i = 0; i < n; ++i)
		s[i].clear();
	//add initial colors

	//answer queries
	for (int u, x; q--;)
	{
		cin >> u >> x, --u, --x;
		//remove color of u
		// s[c[u]].erase({ds[u], u});
		// upd(u, -1);
		// c[u] = x;
		// //add new color of u
		// upd(u, 1);
		// s[x].insert({ds[u], u});
		//output
	}
	cout << ans << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--)
		solve();
}