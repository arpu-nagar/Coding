#include <bits/stdc++.h>
using namespace std;
const int N = 2502;
#define ar array;
using ll = long long int;
vector<array<int,2>> adj[N];
const ll inf = 1e18;
bool vis[N];
vector<ll> prev(N,-1),dis(N,-inf);
set<int> sx;
bool spfa(int s,int e){
	bool cycle = false;
	dis[s] = 0;
	vector<bool> in(N,false);
	queue<ll> q;
	q.push(s);
	vector<ll> cnt(N,0);
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		in[cur] = false;
		
		for(auto u : adj[cur]){
			int v = u[0]; ll w = u[1];
			if(dis[v]< dis[cur]+w){
				dis[v] = dis[cur]+w;
				if(!in[v]){
					cnt[v]++;
					if(cnt[v]>e){
						cycle = true;
						sx.insert(v);
						continue;
					}
					q.push(v);
					in[v] = true;
				}
			}
		}
	}
	return !cycle;
}
void dfs(ll x){
	if(!vis[x]) return;
	vis[x] = 1;
	for(auto &u : adj[x]){
		dfs(u[0]);
	}
}
int main(){
	int n,e;
	cin >> n >> e;
	memset(vis,false,sizeof(vis));

	for(int i=0;i<e;i++){
		int a ,b,c;
		cin >> a >> b >> c;
		adj[a].push_back({b,c});
	}

	// spfa
	if(spfa(1,n)){
		cout << dis[n] << endl;
		return 0;
	}
	for(auto &x: sx) dfs(x);
	if(dis[n] == 1)
	{
		cout << 1 << endl;
		return 0;
	}
		cout << -1 << "\n";

	
}
