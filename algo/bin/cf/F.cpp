#include <bits/stdc++.h>
#include <string.h>
using namespace std;
using ll =  long long int;
int n,k;
vector<int> a;

bool f(double m){
	int s = 0;
	for(auto x: a) s+=floor(x/m);

	return s>=k;
}

int main(){
	cin >> n >> k;
	a.resize(n);
	for(auto &x : a) cin >> x;

	double l = 0,r = 1e8;

	for(int i=0;i<100;i++){
		double mid = l+r;
		mid/=2;
		if(f(mid)){
			l = mid;
		}
		else{
			r = mid;
		}
	}
	cout << setprecision(20);
	cout << l << "\n";
	return 0;
}
