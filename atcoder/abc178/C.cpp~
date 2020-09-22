/**
 *  author: arpunagar
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
const int mod = 1e9+7;
ll modpow(ll a, ll p) {
    ll res = 1;
    while(p) {
        if(p & 1) res = (res * a) % mod;
        p >>= 1;
        a = (a * a) % mod;
    }
    return res;
}
 
void solve() {
    ll n;
    cin >> n;
    if(n == 1) {
        cout << "0\n";
        return;
    }
    ll total = modpow(10, n), no09 = modpow(8, n), no0 = modpow(9, n);
    total = (total - no0 + mod) % mod;
    total = (total - no0 + mod) % mod;
    total = (total + no09 + mod) % mod;
    cout << total << "\n";
}

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t = 1;

        while (t--)
            solve();
        return 0;
}




