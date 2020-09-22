#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int N = 1e5+2;
vector<array<int,2>> adj[N];
vector<vector<ll>> dis;

void djikk(int s,int end, int k){
	priority_queue<array<ll,2>,vector<array<ll,2>>, greater<array<ll,2>>> q;
	int cnt = 0;
	dis.assign(end,vector<ll>());
	vector<ll> dist(end,0);
	q.push({0,s});

	while(!q.empty()){
		auto m = q.top();
		q.pop();
		if(dist[m[1]] > k) continue;
		dis[m[1]].push_back(m[0]);
		if(m[1] == end-1){
			cnt++;
			if(cnt == k) break;
		}
		dist[m[1]]++;
		for(auto x : adj[m[1]]){
			if(dist[x[0]] <= k) q.push({m[0]+x[1],x[0]});
		}
	}
}

int main(){
	int n,e,k;
	cin >> n >> e >> k;
	for(int i=0;i<e;i++){
		int a,b,c;
		cin >>a >>b >>c;
		adj[a].push_back({b,c});
	}

	djikk(1,n+1,k);
	for(auto x: dis[n]) cout << x << " ";
	cout << endl;
}
