
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
const int N = 1e5 + 1;
vector<bool> vis;
int ans;
vi dp;
void dfs(int i){
	if(vis[i]) return;
	vis[i] = 1;
	dp[i] = 1;
	for(auto x : g[i]){
		if(!vis[x]) {
			dfs(x);
			dp[i]+=dp[x];
		}
	}
}


void solve(){
	int n;
	cin >> n;
	g.resize(n+1);
	vis.resize(n+1,false);
	ans = 0;
	dp.resize(n+1,0);
	fill(dp.begin(),dp.end(),0); 
	fill(vis.begin(),vis.end(),false);
	for(int i = 1;i<n;i++){
		int a,b;
		cin >> a >> b;
		g[a].pb(b);
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			dfs(i);
		}
	}
	int mx = -1;
	for(auto x : dp){
		mx = max(mx,x);
	//	cout << x <<  " ";
	}
//	cout << endl;
	cout << n - mx << endl;

}

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int t = 1;
        cin >> t;

        while (t--)
            solve();
        return 0;
}




