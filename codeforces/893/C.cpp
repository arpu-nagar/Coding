
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

vector<vi> g;
vector<bool> vis;
ll a;
vl arr;
void dfs(int i){
	vis[i] = 1;
	a = min(a,arr[i-1]);
	for(auto x: g[i]){
		if(!vis[x]) dfs(x);
	}
}


void solve(){
	int n,m;
	cin >> n >> m;
	arr.resize(n);
	inv(arr);
	g.resize(n+1);
	vis.resize(n+1);
	
	for(int i=1;i<=m;i++){
		int a,b;
		cin >> a >> b;
		g[a].pb(b);
		g[b].pb(a);
	}	
	ll s = 0;
	for(int i=1;i<=n;i++){
		a = 2e9;
		if(!vis[i]){
			dfs(i);
			s+=a;
		}
	}
	cout << s << endl;
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



