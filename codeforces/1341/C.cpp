#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main(){
int t;
cin >> t;
while(t--){
	int n,a,b,c,d;
	cin >> n >> a >> b >> c >>d;
	ll x = n*(a+b);
	ll y = n*(a-b);

	if(x < c-d || c+d < y) cout << "NO" << endl;
	else
		cout << "YES" << endl;

}
}

