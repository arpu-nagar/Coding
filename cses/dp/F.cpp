#include <bits/stdc++.h>

using namespace std;
const int mod = 1e9+7;
char grid[1001][1001];
int dp[1001][1001];
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin >> grid[i][j];

	for(int i=0;i<n;i++){
		if(i == 0){
			if(grid[0][0] != '*')
			dp[0][i] = 1;
			else
			{
				cout << 0 << endl;
				return 0;
			}
		}
		else{
			if(grid[0][i] != '*')
			dp[0][i] = dp[0][i-1];
			else
				dp[0][i] = 0;
		}
	}
	for(int i=1;i<n;i++){
		if(grid[i][0] != '*'){
			dp[i][0] = dp[i-1][0];
		}
		else{
			dp[i][0] = 0;
		}
	}
	for(int i=1;i<n;i++){
		for(int j = 1;j<n;j++){
			if(grid[i][j] == '.')
				dp[i][j] = (dp[i-1][j]+dp[i][j-1])%mod;
			else
				dp[i][j] = 0;
		}
	}
	cout << dp[n-1][n-1];
}




