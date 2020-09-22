#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main(){
	int n;
	cin >> n;
	vector<int> dp(n+1,0);
	dp[0] = 1;
	dp[1] = 1;
	for(int j=2;j<=n;j++){
		for(int i=1;i<=6;i++){
			if(j-i>= 0)dp[j]+=dp[j-i],dp[j]%=mod;
		}
	}
	cout << dp[n] << endl;
}
