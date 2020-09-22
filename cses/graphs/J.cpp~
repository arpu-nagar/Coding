#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
vector<array<int,3>> edge;
const ll inf = 1e18;
int main(){
	int n,e;
	cin >> n >> e;
	
	for(int i=0;i<e;i++){
		int a ,b,c;
		cin >> a >> b >> c;
		edge.push_back({a,b,c});
	}
 
	vector<ll> dis(n+2,inf);	
	int prev[n+2];
	memset(prev,0,sizeof(prev));
	bool found = false;
	dis[1] = 0;
	int x1;
	for(int i = 0;i<n;i++){
		found = false;
		x1 = -1;
		for(auto &x :edge){
			if(dis[x[0]] + x[2] < dis[x[1]]){
				dis[x[1]] =  dis[x[0]]+ x[2];
				prev[x[1]] = x[0];
				found = true;
				x1 = x[1];
			}
		}
	}
 
	if(found) cout << "YES" << endl;
	else
		cout << "NO" << endl;

	if(found){
		for(int i=0;i<n;i++){
			x1 = prev[x1];
		}
		vector<int> cycle;
		for(int v = x1; ; v = prev[v]){
			cycle.emplace_back(v);
			if(v == x1 && cycle.size() >= 2) break;
		}

		reverse(cycle.begin(),cycle.end());
		for(auto &x : cycle) cout << x << " ";
		cout << endl;
	}
}
