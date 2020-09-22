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
#define db(x) cout << (#x) << " is " << (x) << endl;
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
	int n,x,y;
	cin >> n >> x >> y;
	if(n == 2){
		cout << x << " " << y << endl;
		return;
	}
	int dif = y - x;

	int mn = dif+1, t = 0;
	for (int i = 1; i <= dif;i++){
		if(dif%i == 0){
			int p = dif/i +1;
			if(p <= n)
			{
				mn = min(mn, i);
			}
		}
	}
	int c = 0;
	for (int i = x; i <= y;i+=mn){
		cout << i << " ";
		c++;
	}
	if(c < n){
		for (int i = x - mn; i >= 1;i-=mn){
			cout << i << " ";
			c++;
			if(c == n)
				i = 0;
		}
	}
	if(c < n){
		for (int i = y + mn; c < n;i+=mn){
			c++;
			cout << i << " ";
		}
	}
		cout << endl;
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


