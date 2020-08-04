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
int n,k,z;
vl a(n);
int foo(int i,int k,int z,int left){
    if(k>0){
        if(z>0 && i>0 && i < n-1 && !left){
            return max(a[i-1]+foo(i-1,k-1,z-1,1),a[i+1]+foo(i+1,k-1,z,0));
        }
        else if(z>0 && i>0 && !left){
            return a[i-1]+foo(i-1,k-1,z-1,1);
        }
        else if(i < n-1){
            return a[i+1]+foo(i+1,k-1,z,0);
        }
    }
    else
	 return 0;
}

void solve(){
	cin >> n >> k >> z;
	a.clear();
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		a.push_back(x);
	}
	cout << a[0] + foo(0,k,z,0) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
	cin >> t;

    while (t--)
        solve();
    return 0;
}

