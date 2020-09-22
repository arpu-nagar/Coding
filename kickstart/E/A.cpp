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
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    if((a == n && b == n) && c != n){
		cout << "IMPOSSIBLE" << endl;
		return;
    }
    if(a < c || b < c){
		cout << "IMPOSSIBLE" << endl;
		return;
    }
    if(a == 1 && b == 1 && n != 1){
		cout << "IMPOSSIBLE" << endl;
		return;
    }
	if(a == n && b != n){
		if(b != c){
			cout << "IMPOSSIBLE" << endl;
			return;
		}
	}
	if(b == n && a != n){
		if(a != c ){
			cout << "IMPOSSIBLE" << endl;
			return;
		}
	}
	bool f = false;
	bool will = false;
    for(int i=1;i<=a-c;i++){
		cout << 2 << " ";
    }
	if(a-c>= 1){
		for(int i=1;i<=n-a-b+c;i++)cout << 1 << " ";
		f = true;
	}
	if(!f){
		if(b-c) will = true;
		else{
			for(int i=1;i<=c;i++) {
			cout << 3 << " ";
			if(i == 1) for(int j=1;j<=n-a-b+c;j++)cout << 1 << " ";
			}
			cout << endl;
			return;
		}
	}
    for(int i=1;i<=c;i++) cout << 3 << " ";
    if(!f)
	for(int i=1;i<=n-a-b+c;i++)cout << 1 << " ";
    for(int i=1;i<=b-c;i++){
		cout << 2 << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
	cin >> t;

    for(int i=1;i<=t;i++){
		cout << "Case #" << i << ": ";
		solve();
    }
    return 0;
}

