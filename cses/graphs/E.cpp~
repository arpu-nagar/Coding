#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

const int N = 1e5+2;
vector<int> adj[N];
vector<bool> vis(N,false);
vector<int> color(N,-1);

bool ok = true;
void dfs(int i,int c){
	if(!vis[i]){
		vis[i] = 1;
		color[i] = c;
		c^=1;
		for(auto u : adj[i]){
			dfs(u,c);
		}
	}
	else{
		if(color[i] != c) ok = false;
	}
}

int main(){
	int n,m;
	cin >> n >> m;
	for(int i=0;i<m;i++){
		int a,b;
		cin >>a >>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	int c = 0;
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			dfs(i,c);
		}
	}

	if(ok){
		for(int i=1;i<=n;i++) cout << color[i]+1 << " ";
	}
	else
		cout << "IMPOSSIBLE";
}
