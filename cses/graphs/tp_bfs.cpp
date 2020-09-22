#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
bool ok(ll a){
	bool ans = true;
	while(a){
		int r = a%10;
		if(r != 1 || r != 0) ans = false;
		a/=10;
	}
	return ans;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ll a;
		cin >> a;
		if(ok(a)){
			cout << a << endl;
			continue;
		}

		for(int i=2;i<=1e7;i++){
			if(ok(i*a)) {
				cout << i*a << endl;
				i = 1e7+1;
			}
		}
	}
}
