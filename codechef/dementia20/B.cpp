
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


bool prime[1000000+1];

void solve()
{
    int n;
    cin >> n;
    if(n <= 4){
		cout << n-1 << endl;
		return;
    }
    ll c = 0;int i;
    vector<int> ans;
    for(int i=2;i<=n;i++){
		if(prime[i]){
			ans.push_back(i);
		}
    }
    int mn = 0;
    for(auto x : ans){
		int c = x;
		while(c <= n){
			c=c*x;
		}
		c = c/x;
		if(c*2 <= n) continue;
		mn++;
    }
    //cout << mn << endl;
	cout << mn+n-1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=1000000; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=1000000; i += p)
                prime[i] = false;
        }
    }
	cin >> t;

    while (t--)
        solve();
    return 0;
}

