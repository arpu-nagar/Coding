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
//
void solve()
{

	int n;
	cin >> n;
    if(n%2 == 0){
		cout << n/2 << " " << n/2 << endl;
    }
    else{
		int ans = 0;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i == 0){
				if(((n-i)%i) == 0 && i > ans){
				ans = i;
				}
				int c = 0;
				int x = n/i;
				if(x > ans && ((n-x)%x) == 0){
					ans = x;
				}
			}
		}
		if(ans == 0){
			cout << 1 << " " << n-1 << endl;
		}
		else{
			cout << ans << " " << n-ans << endl;
		}
    }
}

int main()
{
	//sieve();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
	cin >> t;

    while (t--)
        solve();
    return 0;
}


