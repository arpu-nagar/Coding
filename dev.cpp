#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using f = float;
vector<int> a;
void dfs(vector<int>& vis,int i,int n){
	if(i == n) return;
	vis[i] =1;

	for(int j = i-1;j>=0;j--){
		if(!vis[j] && a[j]>a[i]){
			dfs(vis,j,n);
		}
	}

	for(int j = i+1;j<n;j++){
		if(!vis[j] && a[j]<a[i]){
			dfs(vis,j,n);
		}
	}
}

int main() {
//#ifndef ONLINE_JUDGE
  //  freopen("input.txt", "r", stdin);
  //  freopen("output.txt", "w", stdout);
//#endif
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        a.resize(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
		
		int mn = n+1;
		int mx = -1;
		for(int i=0;i<n;i++){
			vector<int> vis(n,0);
			dfs(vis,i,n);
			int s = 0;
			for(auto x: vis) s+=x;
			mx = max(mx,s);
			mn = min(mn,s);			
		}

		cout << mn << " " << mx << "\n";
			
	}
}

