#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int main(){
	int n;
	cin >> n;
	int MOD = 1000000007;
	while(n--){
		ll a,b,c;
		cin >> a >> b >> c;
		int a1,ax;
		a1=ax=1;
		if(b == 0 && c == 0) a1=1;
		else if (b == 0 && c!= 0) a1 = 0;
		else{
			while(c > 0){
			if(c&1)
			a1 = (a1*b) % (MOD-1);
			c=c>>1;
			b = (b*b)%(MOD-1);
		}
		}
		if(a == 0 && a1 == 0) ax=1;
		else if (a == 0 && a1!= 0) ax = 0;
		else{
			while(a1 > 0){
			if(a1&1)
			ax = (ax*a) % MOD;
			a1=a1>>1;
			a = (a*a)%MOD;
		}
		}
		cout << ax << endl;
	}
}
