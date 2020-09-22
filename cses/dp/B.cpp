#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main(){
	int n,sum;
	cin >> n >> sum;
	int arr[n];
	for(int i=0;i<n;i++) cin >> arr[i];

	int dp[sum+1];
	memset(dp,mod,sizeof(dp));
	dp[0] = 0;
	for(int i=0;i<=sum;i++){
		for(int j = 0;j<n;j++){
			if(i+arr[j]<=sum) dp[i+arr[j]] = min(dp[i+arr[j]],1+dp[i]);
		}
	}
	if(dp[sum] <= 1000000)
	cout << dp[sum] << endl;
	else
		cout << -1 << endl;
}

