
// author: arpunagar

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int MOD = 1e9 + 7;

vector<vector<int>> g;

vector<int> top(){
	int n = g.size();
	vector<int> in(g.size(),0);
	vector<int> ans;

	for(int i=0;i<g.size();i++){
		for(auto x: g[i]) in[x]++;
	}
	queue<int> q;
	for(int i=0;i<n;i++){
		if(in[i] == 0) q.push(i);
	}

	while(!q.empty()){
		auto m = q.front();
		q.pop();
		if(in[m] == 0) ans.push_back(m);
		else{
			for(auto x : g[m]){
				in[x]--;
				if(in[x] == 0) ans.push_back(x);
			}
		}
	}

	return ans;
}


int main(){
	int n,e;
	cin >> n >> e;
	g.resize(n);
	for(int i=0;i<e;i++){
		int a,b;
		cin >> a >> b;
		a--, b--;
		g[a].push_back(b);
	}
	auto x=	top();	
	vector<int> dp(n,0);
	dp[0] = 1;
	for(auto u : x){
		for(auto i : g[u]){
			dp[u]+=dp[i];
			dp[u]%=MOD;
		}
	}
	cout << dp[n-1] << endl;
}

