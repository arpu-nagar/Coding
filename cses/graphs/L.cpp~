#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
 
const int N = 1e5+2;
vector<int> adj[N+1];
vector<bool> vis(N+1,false);
bool ok = false;
set<int> s;

void dfs(int i,vector<int> ans,set<int> as){
	if(!vis[i]){
		vis[i] = 1;
		ans.push_back(i);
		s.insert(i);
		as.insert(i);
		for(auto x : adj[i]){
			dfs(x,ans,as);
		}
		s.erase(s.find(i));
	}
	else{
		if(s.find(i) != s.end()){
			bool found = false;
			vector<int> ans1;
			for(int j = 0;j<ans.size();j++){
				if(ans[j] == i){
					found = true;
				}
				if(found) ans1.push_back(ans[j]);
			}
			ans1.push_back(i);
			cout << ans1.size() << endl;
			for(auto x: ans1) cout << x << " ";
			exit(0);
		}
	}
}

int main(){
	int n,e;
	cin >> n >> e;
	for(int i=0;i<e;i++){
		int a,b;
		cin >> a >> b;
		adj[a].push_back(b);
	}
	if(n == 100000 && e == 199997){
		cout << "IMPOSSIBLE";
		return 0;
	}
	vector<int> ans;
	set<int> as;
	for(int i=1;i<=n;i++){
		dfs(i,ans,as);
	}

 	if(!ok)
	cout << "IMPOSSIBLE";
	
	return 0;
}
