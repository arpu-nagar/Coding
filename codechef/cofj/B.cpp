
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
	string s;
	cin >> s;
	int x,y;
	cin >> x >> y;
	map<char,int> mp;
	for(auto x: s) mp[x]++;
	int q;
	cin >> q;
	while(q--){
		int m,n;
		cin >> m >> n;
		int xf = m -x;
		int yf = n-y;
		bool yes = true;
		if(xf > 0){
			if(mp['R'] < xf) yes = false;
		}
		else{
			if(mp['L'] < abs(xf)) yes = false;
		}

		if(yf > 0){
			if(mp['U'] < yf) yes = false;
		}
		else{
			if(mp['D'] < abs(yf)) yes = false;
		}

		if(yes){
			cout << "YES" << " " << abs(xf)+abs(yf) << endl;
		}
		else
			cout << "NO" << endl;
	}
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






