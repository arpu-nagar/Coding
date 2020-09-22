#include <bits/stdc++.h>
using namespace std;
long long dp[1001][1001];
char grid[1001][1001];
const int mod = 1e9 + 7;
int main(){
	int h,w;
	cin >> h >> w;
	for(int i=0;i<h;i++)
		for(int j=0;j<w;j++)
			cin >> grid[i][j];

	for(int i=0;i<h;i++){
		if(i == 0){
			if(grid[0][0] == '#')
				dp[0][0] = 0;
			else
				dp[0][0] = 1;
		}
		else
		{
			if(grid[i][0] == '.')
			dp[i][0] = dp[i-1][0];
			else
				dp[i][0] = 0;

		}
	}

	for(int i=1;i<w;i++) if(grid[0][i] == '.') dp[0][i] = dp[0][i-1];
	else
		dp[i][0] = 0;

	for(int i=1;i<h;i++)
		for(int j=1;j<w;j++){
			if(grid[i][j] == '.'){
				dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
			}
			else
				dp[i][j] = 0;
		}

	cout << dp[h-1][w-1]%mod;
return 0;
}

