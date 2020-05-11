#include <bits/stdc++.h>
using namespace std;



long long int solve(vector<long long int> coins,int n,int m){
    long long int dp[n+1][m];
    for(int i=0;i<m;i++)
    {
        dp[0][i] = 1;
    }

    for(int i=1;i<n+1;i++){
        for(int j=0;j<m;j++){
            long long int x = ((i - coins[j]) >= 0 )? dp[i-coins[j]][j] : 0;
            long long int y = (j >=1 ) ? dp[i][j-1] : 0;
            dp[i][j] = x + y; 
        }
    }
    return dp[n][m - 1];
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<long long int> coins;
    for(int i=0;i<m;i++)
    {
        int x;
        cin >> x;
        coins.push_back(x);
    }
    cout << solve(coins,n,m);
}