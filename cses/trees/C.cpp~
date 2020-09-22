
// author: arpunagar

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
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
int n;
vector<vi> g;



int bfs1(){
	vb vis(n+1,false);
	queue<int> q;
	q.push(1);
	int cur = 1;
	while(!q.empty()){
		int i = q.front();
		q.pop();
		vis[i] = 1;
		for(auto u : g[i]){
			if(!vis[u]) q.push(u), cur = u;
		}
	}

	return cur;
}

int bfs2(int i){
	vb vis(n+1,false);
	int l = 0;

	queue<int> q;
	q.push(i);

	while(!q.empty()){
		int n = q.size();
		while(n--){
			int c = q.front(); q.pop();
			vis[c] = 1;
			for(auto u : g[c]){
				if(!vis[u]) {
					q.push(u);
				}
			}
		}
		l++;
	}
	return l;
}

void solve(){
	cin >> n;
	g.resize(n+1);
	for(int i=0;i<n-1;i++){
		int a,b;
		cin >> a >> b;
		g[a].pb(b);
		g[b].pb(a);
	}

	int x = bfs1();
	cout << bfs2(x)-1 << endl;
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




