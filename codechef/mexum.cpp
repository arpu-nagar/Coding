#include <bits/stdc++.h>
using namespace std;
#define ll long long int;

void solve(){
    int n;
    int mod = 998244353;
    cin >> n;
    vector<int> a(n);
    for(auto &it : a)
    cin >> it;
    int dp[n+1][n+1];
    long long int sum = 1;
    sort(a.begin(),a.end());
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i == 0 || j == 0)
            {
            dp[i][j] = 1;           
            continue;}
            if(dp[i-1][j] == a[i-1])
            {
                dp[i][j] = a[i-1]++;
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
            
            sum+=dp[i][j];
            sum%=mod;
        }
    }
    cout << sum << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}