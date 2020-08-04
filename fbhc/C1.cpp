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
	vector<pair<ll,ll>> tree(n);
	for(int i=0;i<n;i++){
		cin >> tree[i].first >> tree[i].second;
	}
	sort(tree.begin(),tree.end());
	ll mx = 0;
	unordered_map<ll,ll> mp;
	for(int i=0;i<n;i++){
		if(mp[tree[i].fi] >= mp[tree[i].fi-tree[i].se]){
			mp[tree[i].fi+tree[i].se] = max(mp[tree[i].fi+tree[i].se],mp[tree[i].fi]+tree[i].se);
		}
		else{
			mp[tree[i].fi] = mp[tree[i].fi-tree[i].se] + tree[i].se;
		}
		//cout << mp[tree[i].fi] << " " << tree[i].fi << endl;
	}
	for(auto x:mp) mx = max(mx,x.second);
	cout << mx << "\n";
}

bool ok(int l,int r,int n){
	if(l < n && r < n && l > -1 && r > -1)
		return true;

	return false;
}

int main()
{
    int n;
	cin >> n;
	vector<vector<char>> graph(n,vector<char> (n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> graph[i][j];
		}
	}
	vector<pi> dir = {
		{-1, -1}, {1, 1}, {1, 0}, {0, 1}, {-1, 0}, {0, -1}, {-1, 1}, {1, -1}};
	queue<pair<pi, pi>> q;
	int c = 0;
	string ans;
	cin >> ans;
	int id = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(graph[i][j] == ans[id]){
				q.push({{i, j}, {0, 0}});
				if(++id == ans.size()){
					c++;
					continue;
				}
				while(!q.empty()){
					pair<pi, pi> curr = q.front();
					q.pop();
					if(id == ans.size())
						c++;

					if(curr.second == make_pair(0,0)){
						for(auto x: dir){
							int l = x.first + curr.first.first;
							int r = x.second + curr.second.second;
							if(ok(l,r,n)){
								if(graph[i][j] == ans[id]){
									cout << l << r << endl;
									q.push({{l, r}, x});
								}
							}
						}
					}
					else{
						++id;
						for(auto x: dir){
							if(x == curr.second){
								int l = x.first + curr.first.first;
								int r = x.second + curr.second.second;
								if(graph[i][j] == ans[id]){
									cout << l << r << endl;
									q.push({{l, r}, x});
								}
							}
						}
					}
				}
			}
		}
	}
	cout << c << endl;
}