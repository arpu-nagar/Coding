#include <bits/stdc++.h>
using namespace std;
const int N = 10001;
int dp[N][N];
int main(){
	string s,t;
	cin >> s;
	cin >> t;
	for(int i=1;i<=s.size();i++){
		for(int j=1;j<=t.size();j++){
			if(s[i-1] == t[j-1]){
				dp[i][j] = max(dp[i][j-1],1+dp[i-1][j-1]);
			}
			else
				{
					dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
		}
		}
	}

	if(dp[s.size()][t.size()] == 0)
	{
		cout << "";
		return 0;
	}
	//branch and bound
	int i=s.size(),j = t.size();
	string ans = "";
	while(i>0 && j >0){
		if(s[i-1] == t[j-1]){
			ans = ans + s[i-1];
			i--,j--;
		}
		else{
			if(dp[i-1][j] > dp[i][j-1]){
				i--;
			}
			else{
				j--;
			}
		}
	}
	reverse(ans.begin(),ans.end());
	cout << ans;
return 0;
}

