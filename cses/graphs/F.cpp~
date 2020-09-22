#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

const int N = 1e5+2;
vector<int> adj[N+1];
vector<bool> vis(N+1,false);
bool ok = false;

void dfs(int i,unordered_set<int>& s,int p,vector<int>& ans){
	if(!vis[i]){
		vis[i] = 1;
		s.insert(i);
		ans.push_back(i);
		for(auto u : adj[i]){
			if(u != p)
			dfs(u,s,i,ans);
		}
	}
	else{
		if(s.find(i) != s.end()){
			ok = true;
			bool found  = false;
			for(int p1=0;p1<ans.size();p1++){
				if(ans[p1] == i && !found){
					found = true;
					cout << ans.size() - p1+1 << endl;
				}
				if(found) cout << ans[p1] << " ";
			}
			cout << i << endl;			
			exit(0);
		}
		else
			return;
	}
}

int main(){
	int n,e;
	cin >> n >> e;
	for(int i=0;i<e;i++){
		int a,b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	for(int i=1;i<=n;i++){
		unordered_set<int> s;
		vector<int> ans;
		if(!vis[i]){
			dfs(i,s,-1,ans);
		}
	}
	cout << "IMPOSSIBLE";
}

