/**
 *  Hi, I'm Arpan.
 *  Hardwork beats talent if talents doesn't work hard, friend me if you want to. ✌.|•͡˘‿•͡˘|.✌
 *
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
#define inv(v)         \
    for (auto &it : v) \
        cin >> it;
#define MOD 1000000007

void solve()
{
    int n;
    cin >> n;
    vl arr(n);
    inv(arr);
    sort(arr.begin(),arr.end());
    ll y = arr[n-1];
    ll a[20] = {0};
        for(int i=0;i<n;i++){
        	for(int j=0;i<20;j++){
        		a[j]+=arr[i]%2;
        		arr[i]/=2;
        	}
        }
        ll sum = 0;
        for(int i=0;i<n;i++){
        	ll a=0;
        	for(int j=0;i<20;j++){
        		a*=2;
        		if(a[19-j]){
        			a+=1;
        			a[19-j]--;
        		}
        	}
        	sum+=a*a;
        }
	cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();

    return 0;
}
