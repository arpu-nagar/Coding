	#include <bits/stdc++.h>
using namespace std;
#define mod 1e9;
using ll = long long int;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);

	for(auto &i : a) cin >> i;
	vector<ll> arr(n);
	arr[0] = a[0];
	for(int i=1;i<n;i++){
	arr[i]+=arr[i-1]+a[i];
	}
	int m;
	cin >> m;
	while(m--){
	ll x;
	cin >> x;
	auto y = lower_bound(arr,arr+n,x);
	cout << y << endl;
	}
}

