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
bool some(pair<ll,ll>p1,pair<ll,ll>p2)
{
	return p1.first>p2.first;
}
/*******************************************/

void may(vector<int> a,int k,int n){
		ll max1= *max_element(a.begin(),a.end());
	    ll pox = (ll)log2(max1);
   		ll x=(ll)power(2, pox);
	    ll ans=0;
	    unordered_map<ll,ll>mp;
	    while(x)
	    {
	    	for(int i=0;i<n;i++)
	    	{
	    		if(x&a[i])
	    			mp[x]++;
	    	}
	    	x/=2;
	    }
	    ll p=0;
	    vector<pair<ll,ll>>lol;
	    for(auto q:mp)
	    {
	    	lol.push_back(make_pair(q.first*q.second,q.first));
	    }
	    sort(lol.begin(),lol.end(),some);
	    for(int i=lol.size()-1;i>0;i--)
	    {
	    	if(lol[i].first==lol[i-1].first&&lol[i].second<lol[i-1].second)
	    	{
	    		swap(lol[i],lol[i-1]);
	    	}
	    }
	    for(int i=0;i<lol.size()-1;i++)
	    {
	    	if(lol[i].first==lol[i+1].first&&lol[i].second>lol[i+1].second)
	    	{
	    		swap(lol[i],lol[i+1]);
	    	}
	    }
	    for(int i=0;i<k&&i<lol.size();i++)
	    {
	    	ans+=lol[i].second;
	    }
	    cout<<ans<<endl;
}

void solve()
{
    int n,k;
    cin >> n >> k;
    int x[32];
    for(int i=0;i<32;i++) x[i] = 0;
    vi a(n);
    inv(a);
	if(k <= 2){
		may(a,k,n);
		return;
	}
		for(int j=0;j<n;j++){
				for(int i=0;i<32;i++){
			if(a[j] & (1 << i)){
				x[i]++;
			}
				}
		}

    vector<pair<ll,ll>> lol(32);
    for(int i = 0;i<32;i++){
		lol[i].first = power(2,i)*x[i];
		lol[i].second = i;
    }
    ll ans = 0;
    set<int> s;
    while(k > 0){
    	int max2 = -1;
		for(int i=0;i<32;i++){
			if(lol[i].first > max2 ){
				if(s.find(lol[i].first) == s.end())
				max2 = lol[i].first;
			}
		}
		for(int i=0;i<32;i++){
			if(max2 == lol[i].first && k > 0){
				ans+= power(2,lol[i].second);
				k--;
				s.insert(max2);
			}
			if(k == 0) break;
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


