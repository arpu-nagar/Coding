#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int mod = 1e9 + 7;

void solve(){
	int n;
	cin >> n;
	vector<int> speed(n);
	for(auto &x : speed)cin >> x;
	vector<vector<int>> reach(vector<int> (n,-1));

	int mn = n, mx = 1;

	for(int i=n-1;i>=0;i--){
		reach[i][i] = 1;
		for(int j = i+1;j<n;j++){
			if(speed[i]>speed[j]){
				reach[i][j] = 1;
			}
		}
	}

	for(int i=0;i<n;i++){
		vector<int> temp = reach[i];
		for(int j = i-1;j>=0;j--){
			if(speed[j]>speed[i]){
				for(int k = 0;k<n;k++){

				}
			}
		}	
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		solve();
	}
}
