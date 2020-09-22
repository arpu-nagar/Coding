
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

const int mxN = 1e5+3;
vector<int> adj[mxN+1];
vector<int> ans1;
int ok = 0;
void dfs(int i,vector<int> ans,vector<bool> vis,int n){
	if(!vis[i]){
		vis[i] = 1;
		ans.push_back(i);
		if(i == n){
			ok =  1;
			if(ans1.size() < ans.size())
				ans1 = ans;
		}

		for(auto x: adj[i]){
			dfs(x,ans,vis,n);
		}
	}
}

void solve(){
	int n,e;
	cin >> n >> e;
	for(int i=1;i<=e;i++){
		int a,b;
		cin >> a >>b;
		adj[a].pb(b);
	}
	vector<bool> vis(mxN,false);
	vector<int> ans;
	dfs(1,ans,vis,n);
	if(ok){
		cout << ans1.size() << endl;
		for(auto x: ans1) cout << x << " ";
	}
	else
		cout << "IMPOSSIBLE" << endl;
}

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
		solve();
        return 0;
}




