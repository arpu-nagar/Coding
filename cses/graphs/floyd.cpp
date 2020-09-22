 #include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define ar array
 
const int N = 503;
ll g[N][N];
ll dis[N][N];
const ll inf = 1e18;
int main(){
	int n,m,q;
	cin >> n>> m >>q;
	for(int i=0;i<m;i++){
		ll a ,b ,c;
		cin >> a >> b >> c;
		if(g[a][b] == 0)
		g[a][b] = g[b][a] = c;
		else
		g[a][b] = g[b][a] = min(c,g[a][b]);
	}
 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i == j){
				dis[i][j] = 0;
				continue;
			}
			if(g[i][j] > 0)
				dis[i][j] = g[i][j];
			else
				dis[i][j] = inf;
		}
	}
 
 
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(dis[i][k] != inf && dis[j][k] != inf)
				dis[i][j] = min(dis[i][j], dis[i][k]+ dis[k][j]);
			}
		}
	}
 
	while(q--){
		ll a , b;
		cin >> a >>b;
		if(dis[a][b] == inf) cout << -1 << endl;
		else
			cout << dis[a][b] << endl;
	}
}
