#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(){
	ll n;
	cin >> n;
	ll p = (n*(n+1))/2;
	if(p%2){
		cout << 0 << endl;
		return;
	}
	//  
	double hf = p*1.0/2;
	tr = x => x*(x+1)/2 == n*(n+1)/4
	double tr = (sqrt(8*hf+1))/2 - 0.5;
	ll ans = (ll) floor(tr);
	ll extra = 0;
	if(tr -  ans == 0){
		extra = ((ans)*(ans-1))/2 + ((n-ans)*(n-ans-1))/2;
	}
	cout << extra + n - ans << endl;
}
// 10^6 => 
// 20 , 1 2 4 
int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
