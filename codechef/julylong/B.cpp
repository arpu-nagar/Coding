#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

ll sum(ll x){
if(x == 0) return 0;
else{
	return (x%10 + sum(x/10));
}
}

void solve(){
	int n;
	cin >> n;
	int ch,m;
	ch=m=0;
	while(n--){
		ll a,b;
		cin >> a >> b;
		ll x,y;
		x=sum(a);
		y=sum(b);
		if(x > y) ch++;
		else if(y > x)m++;
		else {
			ch++;m++;
		}
	}
	if(ch > m){
		cout << "0 " << ch << endl;
	}
	else if(m > ch){
		cout << "1 "<< m << endl;
	}
	else{
		cout << "2 "<< m << endl;
	}
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}

