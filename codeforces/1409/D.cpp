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

ll sum(ll m){
    ll ans = 0;
    while(m){
        ans += m % 10;
        m /= 10;
    }
    return ans;
}

void solve()
{
    ll n, dig;
    cin >> n >> dig;
    string x = to_string(n);

    ll s = sum(n);
    if(s <= dig){
        cout << 0 << endl;
        return;
    }

    ll p = 1;
    ll ans = 0;
    for (int i = 0; i < 18;i++){
        int dig1 = (n / p) % 10;
        ll add = p * ((10 - dig1)%10);
        n += add;
        ans += add;
        if(sum(n) <= dig){
            cout << ans << endl;
            return;
        }
        p *= 10;
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


