#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N = 100;
const ll W = 1e9;
ll dp[N+1][W+1];

int main(){
	int n,w;
	cin >> n >> w;
	int weight[n],value[n];
	for(int i=0;i<n;i++) cin >> weight[i] >> value[i];

	for(int i=1;i<=n;i++){
		for(int j=1;j<=w;j++){
			if(j-weight[i-1] >= 0) dp[i][j] = max(dp[i-1][j],dp[i-1][j-weight[i-1]]+value[i-1]);
			else
				dp[i][j] = dp[i-1][j];
		}
	}

	cout << dp[n][w];

return 0;
}

