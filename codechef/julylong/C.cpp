#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
//MISSING POINT
void solve(){
	int n;
	cin >> n;
	ll x,y;x=y=0;
	for(int i=0;i<4*n-1;i++){
		int a,b;
		cin >> a>> b;
		x=x^a;
		y=y^b;
	}
	cout << x << " " << y << endl;
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}

