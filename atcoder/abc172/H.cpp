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

ll power(ll x, ll y)
{
    ll temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
        return x*temp*temp;
}

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
    int n,k;
    cin >> n >> k;
    int x[32] = {0};
    vi a(n);
    inv(a);
    for(int i=0;i<32;i++){
		for(int j=0;j<n;j++){
			if(a[j] & (1 << i)){
				x[i]++;
			}
		}
    }
    vector<pair<ll,ll>> lol(32);
    for(int i = 0;i<32;i++){
		lol[i].first = (1<<i)*x[i];
		lol[i].second = i;
    }
    ll ans = 0;
    set<int> s;
    int ok = 0;
    while(ok == 0){
    	int max2 = -1;
		for(int i=0;i<32;i++){
			if(lol[i].first > max2 ){
				if(s.find(lol[i].first) == s.end())
				max2 = lol[i].first;
			}
		}
		for(int i=0;i<32 && ok == 0;i++){
			if(max2 == lol[i].first && k > 0){
				ans= ans+ 1<<lol[i].second;
				k--;
				s.insert(max2);
			}
			if(k == 0) ok = 1;
		}
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
     cin >> t;
    while (t--)
        solve();
    return 0;
}


