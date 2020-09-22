#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++)
		for(int j = 0;j<n;j++)
			scanf("%d",&arr[i][j]);

	set<int> s;
	for(int i=0;i<n-1;i++){
		if(arr[0][i+1]-arr[0][i] != 1) s.insert(arr[0][i+1]-arr[0][i]); 
	}
	cout << s.size() << endl;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}
}
