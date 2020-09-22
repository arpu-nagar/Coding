#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define ar array
const int N = 1e5+2;
const ll inf = 1e18;
vector<ar<ll,2>> adj[N];
vector<int> vis(N,0);
vector<ll> dis(N,inf);
int main(){
	int n,e;
	cin >> n >> e;
	for(int i=0;i<e;i++){
		ll a ,b, c;
		cin >> a >>b >> c;
		adj[a].push_back({b,c});	
	}
	priority_queue<ar<ll,2>> q;
	q.push({0,1});
	dis[1] = 0;
	while(!q.empty()){
		auto m = q.top();
		q.pop();
		if(vis[m[1]]) continue;
		vis[m[1]] = 1;

		for(auto u : adj[m[1]]){
			ll dist = u[1], point = u[0];
			if(dis[m[1]]+dist<dis[point]){
				dis[point] = dis[m[1]] + dist;
				q.push({-dis[point],point});
			}
		}
	}	

	for(int i=1;i<=n;i++) cout << dis[i] << " ";
	return 0;	
}
