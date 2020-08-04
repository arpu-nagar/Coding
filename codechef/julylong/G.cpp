#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

int nextPowerOf2( int n)
{
    n--;
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    n++;
    return n;
}

void solve(){
	int x,n;
	cin >> n >> x;
	vector<ll> arr(n);
	for(auto &it : arr) cin >> it;
	ll mx = -1;
	sort(arr.begin(),arr.end());
	for(auto x1: arr) mx=max(mx,x1);
	ll c = 0;
	if(mx <= x){
		cout << n << endl;
		return;
	}
	else{
		int zer = 0;
		ll ans = 0;
		auto pos = arr.begin();
		int c = 0;
		for(int i=0;i<n && c == 0;i++){
			if(arr[i] > x/2){
				pos = arr.begin() + i;
				c=1;
			}
		}
        for(auto i = pos; i != arr.end();i++){
			while(x < *i){
				x = x*2;
				ans++;
			}
			x = 2* (*i);
			ans++;
        }
        /*ll ans1 = ans;
        ll x1 = x;
        while(x1 < arr[n-1]){
				x1 = x1*2;
				ans1++;
			}
			x1 = 2* arr[n-1];
			ans1++;
		*/

        /*int so = arr[n-1];
        int ok = 0;
        int temp;
        while(ok == 0){
			if(so -x <= 0){
				temp = 2*so;
			}
			so = so -x;
			if(so >= arr[n-1]/2){
				so = arr[n-1];
			}
			else if(so < arr[n-1]/2 && so > 0){
				so = 2* so;
			}
			if(so <= 0){
				ok = 1;
			}
			ans++;
			x = x*2;
        }*/

        /*if(pos - arr.begin() != 0){
			while(temp < *pos){
				temp = temp*2;
				ans++;
			}
			ans++;
			cout << ans+ (pos - arr.begin())-1 << endl;
			return;
        }*/

        cout << ans + (pos - arr.begin()) << endl;
	}

}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}
