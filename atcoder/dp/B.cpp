#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 +1;
int dp[N];

int main(){
	int n,k;
	cin >> n >> k;
	int arr[n];
	memset(dp,1000000,sizeof(dp));
	for(int i=0;i<n;i++) cin >> arr[i];
	dp[0] = 0;
	for(int i=0;i<n;i++){
		for(int j=i-1;j>=max(i-k,0);j--){
			dp[i] = min(dp[i],dp[j]+abs(arr[i]-arr[j]));
		}
	}
	cout << dp[n-1];
return 0;
}

