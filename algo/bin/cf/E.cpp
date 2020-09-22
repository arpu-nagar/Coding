#include <bits/stdc++.h>
#include <string.h>
using namespace std;
using ll =  long long int;
int main(){
	ll w,h,n;
	cin >> w >> h >> n;

	auto f = [&] (ll m){
	if( (m/w) * (m/h) < n) return false;
	return true;
	};
	ll i = 1;
	while(!f(i))i*=2;
	ll r = i,l = 0;

		while(l+1 < r){
			ll mid = (l+r)/2;
			if(f(mid)){
				r = mid;
			}
			else{
				l = mid;
			}
		}
	cout << r << endl;
    return 0;
}
