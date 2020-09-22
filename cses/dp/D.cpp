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
	for(int i=0;i<n;i++){
		for(int j = arr[i];j<=sum;j++){
			dp[j] = (dp[j]+dp[j-arr[i]])%mod;
		}
	}
	cout << dp[sum] << endl;
}

