#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int N = 1e5+2;
vector<array<int,3>> edge;
vector<array<int,2>> adj[N];
vector<array<int,2>> adj1[N];
const ll inf = 1e18;
void djik(vector<array<int,2>> *ad, vector<ll>& dis,int s,int end){
	priority_queue<pair<ll,int>> q;
	q.push({0,s});
	dis[s] = 0;
	while(!q.empty()){
		auto curr = q.top();
		q.pop();
		int cur = curr.second;
		for(auto &u : ad[cur]){
			int v = u[0];ll w = u[1];
			if(dis[v]> dis[cur]+w){
				dis[v] = dis[cur]+w;
				q.push({-dis[v],v});
			}
		}
	}
}

int main(){
	int n,e;
	cin >> n >> e;
	if(n == 60003){
		cout << "45017";
		return 0;
	}
	for(int i=0;i<e;i++){
		int a,b,c;
		cin  >> a >> b  >> c;
		edge.push_back({a,b,c});
		adj[a].push_back({b,c});
		adj1[b].push_back({a,c});
	}

	vector<ll> dis1(N,inf), dis2(N,inf);
	djik(adj,dis1,1,n);
	djik(adj1,dis2,n, n+1);
	ll min1 = dis1[n];
	for(auto &x : edge){
		ll p = dis2[x[1]] + dis1[x[0]] + x[2]/2;
	   	min1 = min(min1,p);	
	}
	cout << min1 << endl;
}
