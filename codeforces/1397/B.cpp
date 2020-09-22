/**
 *  Hi, I'm Arpan.
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
#define pb push_back
#define popb pop_back()
#define endl "\n"
#define fi first
#define se second
typedef priority_queue<ll, vector<ll>, greater<ll>> minheap;
typedef priority_queue<ll> maxheap;
#define sortv(v) sort(v.begin(),v.end())
#define rsortv(v) sort(v.begin(),v.end(), greater<>());

ll modPower(ll num,ll r) {
	if(r==0) return 1;
	if(r==1) return num%MOD;
	ll ans=modPower(num,r/2)%MOD;
	if(r%2==0) {
		return (ans*ans)%MOD;
	} return (((ans*ans)%MOD)*num)%MOD;
}

ll nCr(ll n, ll r) {
    ll res = 1;
    if (r > n - r) {
        r = n - r;
    }
    for(int i=0;i<r;i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

/*******************************************/


void solve()
{
	int n;
	cin >> n;
	vl a(n);
	inv(a);
	sortv(a);
	if(n > 32){
		ll ans = 0;
		for(auto x: a) ans+=x-1;
		cout << ans << endl;
	}
	ll arr[100000];
	memset(arr,0,sizeof(arr));
	for(int j=sqrt(a[0]);j<=sqrt(a[n-1]);j++){
		for(int i=0;i<n;i++){
			arr[j]+= abs(pow(j,i)-a[i]);
	}
	}
	ll mn = 1e17;
	for(int i=sqrt(a[0]);i<=sqrt(a[n-1]);i++){
			cout << arr[i] << endl;
		mn = min(arr[i],mn);
	}
	cout << mn << endl;
}

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t = 1;
        //cin >> t;

        while (t--)
            solve();
        return 0;
}


