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
    int n,m,k;
	cin >> n >> m >> k;
	int arr[n],brr[m];
	for(int i =0;i<n;i++)cin >> arr[i];
	for(int i =0;i<m;i++)cin >> brr[i];
	int i,j;
	i=0;
	j=0;
	ll sum = 0;
	while(sum <= k && i+j != (n+m)){
		if(i < n && j < m){
			if(arr[i]<= brr[j]){
				sum+=arr[i++];
			}
			else{
				sum+=brr[j++];
			}
		}
		else if( i < n && j == m){
				sum+=arr[i++];
		}
		else if(i == n && j<m){
			sum+=brr[j++];
		}
	}
	ll a[n],b[m];
	a[0] = arr[0];
	b[0] = brr[0];
	for(int i =1;i<n;i++)a[i] = a[i-1]+arr[i];
	for(int i =1;i<m;i++)b[i] = b[i-1]+brr[i];
	auto x = lower_bound(a,a+n,k);
	auto y = lower_bound(b,b+m,k);
	int a1,a2;a1=a2=0;
	for(int i =0;i<n;i++)if(a[i] == *x)a1=i;
	for(int i =0;i<m;i++)if(b[i] == *y)a2=i;
	if(i+j == n+m) cout << n+m;
	else cout << max({i+j-1,a1,a2});
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    return 0;
}

