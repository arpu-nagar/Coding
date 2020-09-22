#include <bits/stdc++.h>

using namespace std;
const int mod = 1e9+7;

int main(){
	int n,sum;
	cin >> n >> sum;
	int arr[n];
	for(int i=0;i<n;i++) cin >> arr[i];
	int dp[sum+1];
	memset(dp,0,sizeof(dp));
	dp[0] = 1;
	for(int i=0;i<sum;i++){
		for(int j=0;j<n;j++){
			if(arr[j]+i <= sum){
				dp[i+arr[j]]= (dp[i+arr[j]]+dp[i])%mod;
			}
		}
	}
	cout << dp[sum] << endl;
}
