#include <bits/stdc++.h>

using namespace std;
const int mod = 1e9+7;
int dp[100001][1001];
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout.tie(NULL);
	int n,x;
	cin >> n >> x;
	vector<pair<int,int>> arr(n);
	for(int i=0;i<n;i++){
		cin >> arr[i].first;
	}
	for(int i=0;i<n;i++){
		cin >> arr[i].second;
	}
	sort(arr.begin(),arr.end());
	for(int i=1;i<=x;i++){
		for(int j=1;j<=n;j++){
			if(i-arr[j-1].first >= 0){
				dp[i][j] = max(dp[i][j-1],arr[j-1].second+dp[i-arr[j-1].first][j-1]);
			}
			else
				dp[i][j] = dp[i][j-1];
		}
	}


	printf("%d",dp[x][n]);
}



