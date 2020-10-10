
// author: arpunagar

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
#define ar array
typedef priority_queue<ll, vector<ll>, greater<ll>> minheap;
typedef priority_queue<ll> maxheap;
#define sortv(v) sort(v.begin(),v.end())
#define db(x) cout << (#x) << " is " << (x) << endl;
#define rsortv(v) sort(v.begin(),v.end(), greater<>());

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

void solve(){
	int n;
	cin >> n;
	vl a(n);
	inv(a);
	map<int,int> mp;

	for(int i=0;i<n;i++){
		int lb = -1;
		ll x = a[i];int c = 0;
		while(x){
			c++;
			int r = x%2;
			if(r) lb = c;
		   	x/=2;
		}
	//	cout << a[i] << " " << lb << endl;
		mp[lb]++;
	}
	ll ans = 0;
	for(auto &x : mp){
		if(x.fi != -1){
			ans+=((x.se*1ll)*(x.se-1)) / 2;
		//	cout << x.se << " " << x.fi << endl;
		}
	}
	cout << ans << endl;
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




