
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
vi ans;
vi dis;
int n;

void dfs(int i,int par){
	for(auto u : g[i]) if(u != par){
		dis[u]=dis[i]+1;
		dfs(u,i);
	}
}

void dfs(int i){
	fill(dis.begin(),dis.end(),0);	
	dfs(i,-1);
}

void tree(){
	dfs(1);
	int best = 0;
	for(int i=1;i<=n;i++) {
		if(dis[i] > dis[best]) best = i;
	}

		dfs(best);
	for(int i=1;i<=n;i++) ans[i]=dis[i];

	for(int i=1;i<=n;i++) {
		if(dis[i] > dis[best]) best = i;
	}
	dfs(best);
	for(int i=1;i<=n;i++){
		ans[i] = max(ans[i],dis[i]);
	}
}

void solve(){
	cin >> n;
	g.resize(n+1);
	dis.resize(n+1,0);
	ans.resize(n+1,0);
	for(int i=1;i<=n-1;i++){
		int a,b;
		cin >> a >> b;
		g[a].pb(b);
		g[b].pb(a);
	}
	tree();
	for(int i=1;i<=n;i++) cout << ans[i] << " ";
	cout << endl;
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




