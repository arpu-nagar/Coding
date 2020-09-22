#include <bits/stdc++.h>

using namespace std;
const int mod = 1e9+7;

int main(){
	string s1,s2;
	cin >> s1;
	cin >> s2;
	int dp[s1.size()+1][s2.size()+1];
	memset(dp,0,sizeof(dp));
	for(int i=0;i<=s1.size();i++){
		for(int j=0;j<=s2.size();j++){
			if(i == 0) dp[i][j] = j;
			else if (j == 0) dp[i][j] = i;
			else if(s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1];
			else
			dp[i][j] = 1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
		}
	}

	cout << dp[s1.size()][s2.size()];
}




