#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

const int N = 1e5+2;
vector<int> adj[N];
vector<bool> vis(N,false);

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,e;
	cin >> n >> e;

	for(int i=0;i<e;i++){
		int a,b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	int dis[N+1];
	memset(dis,0,sizeof(dis));
	
	queue<int> q;
	q.push(1);

	while(!q.empty()){
		int p = q.front();
		q.pop();
		if(p == n) break;
		vis[p] = 1;
		for(auto m : adj[p]){
			if(!vis[m]){
				dis[m] = p;
				vis[m] = 1;
				q.push(m);
			}
		}
	}
	
	if(dis[n] == 0){
		cout << "IMPOSSIBLE" << endl;
	}
	else{
		vector<int> ans;
		int p = dis[n];
		ans.push_back(n);
		while(p != 0){
			ans.push_back(p);
			p = dis[p];
		}

		reverse(ans.begin(),ans.end());
		cout << ans.size() << "\n";
		for(auto o : ans) cout << o << " ";
	}
	
}

