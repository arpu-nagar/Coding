#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++) cin >> arr[i];
	ll ans  = 0;
	for(int i =0;i<n-1;i++){
		ans+=abs(arr[i]-arr[i+1]);
	}
	cout << ans -n+1 << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
