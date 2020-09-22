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
const int N = 2e5+1;
map<ll,int> g[N+1];
void solve(){

		ll n;
       cin>>n;
       ll p[n+1];
       ll a[n+1];
       ll b[n+1];

       ll d[n+1];

        for(ll i=0;i<=n;i++){
           d[i]=-1;
        }

       for(ll i=1;i<=n-1;i++){
           ll u,v;
           cin>>u>>v;

            g[u][v]=1;
            g[v][u]=1;
       }

       for(ll i=1;i<=n;i++){
           cin>>p[i];
       }

        for(ll i=1;i<=n;i++){
           cin>>a[i];
       }

        for(ll i=1;i<=n;i++){
           cin>>b[i];
       }

       for(ll i=1;i<=n;i++){
           ll vis[n+1] = {0};
           ll c = p[i];

           stack<ll> q;
           q.push(c);

           while(!q.empty()){
               ll src = q.top();
               q.pop();

              if(vis[src]){
                  continue;
              }else{
                  vis[src]=1;

                   b[src] = b[src] - min(a[c],b[src]);
                    if(b[src]<=0 && d[src]==-1){
                         d[src] = i;
                    }
              }

               for(auto cm : g[src]){
                  if(cm.second && !vis[cm.first]){
                       q.push(cm.first);
                  }
               }
           }


            for(auto cm : g[c]){
                g[c][cm.first]=0;
                g[cm.first][c]=0;
            }
       }

       for(ll i=1;i<=n;i++){
           cout<<d[i]<<" ";
       }
       cout<<endl;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
       solve();
    }
  return 0;
}




