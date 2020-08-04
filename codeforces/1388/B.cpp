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
	int n;
	cin >> n;
	string ans = "";
	int x = n/3;
	int p = n%3;
	if(p == 0){
		for(int i=0;i<x;i++){
			ans = ans + "8";
		}
		for(int i=x;i<n;i++){
			ans = "9" + ans;
		}
	}
	else if(p == 1){
		ans = ans + "8";
		for(int i=1;i<x;i++){
			ans = ans + "8";
		}
		for(int i=max(1,x);i<n;i++){
			ans = "9" + ans;
		}
	}
	else if(p == 2){
		ans = ans + "4";
		for(int i=1;i<x;i++){
			ans = ans + "8";
		}
		for(int i=max(1,x);i<n;i++){
			ans = "9" + ans;
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



