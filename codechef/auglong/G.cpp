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

ll ncr(ll n, ll r) {
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

ll f(ll num,int co,vector<ll> lm_set[]){

    vector<ll> lm = lm_set[co];
    for(ll i=0;i<lm.size() && num>0 ;i++){

        ll temp = min(lm[i],num);
        lm[i] = lm[i] - temp;
        num = num - temp;
    }

    if(num>0){
        return 0;
    }

    ll s1 = 0;
    ll k = lm.size();
    for (int i=0; i<k; i++)
        s1 += lm[i];

    ll s2 = 0;
    ll temp[k+1];
    for (ll i=0; i<k; i++)
    {
        temp[i] = lm[i]*(s1-lm[i]);
        s2 += temp[i];
    }
    s2 /= 2;

    ll s3 = 0;
    for (ll i=0; i<k; i++)
        s3 += lm[i]*(s2-temp[i]);
    s3 /= 3;

    return s3;
}


void solve(){
		ll n,c,k;
       cin>>n>>c>>k;

       unordered_map<ll,int> co[c+1];
       vector<ll> lm[c+1];

       for(int i=1;i<=n;i++){
           ll a,b,col;
           cin>>a>>b>>col;
           co[col][a]++;
       }

       ll V[c+1]={0};
       for(ll i=1;i<=c;i++){
           cin>>V[i];
       }


       for(ll i=1;i<=c;i++){
           vector<ll> lm_set;
           for(auto it : co[i]){
               lm_set.push_back(it.second);
           }
          sortv(lm_set);
           lm[i] = lm_set;
       }


       ll dp[k+1][c+1];
       ll tempdp[k+1][c+1];
       for(int i=0;i<=k;i++){
           for(ll j=0;j<=c;j++){
               dp[i][j] = 1e18+2;
               if(j==0){
                   dp[i][j]=0;
               }
				tempdp[i][j] = -1;
           }
       }

       for(ll i=0;i<=k;i++){
           for(ll j=1;j<=c;j++){
               ll max_lm_rem = i/V[j];
               for(ll k=0;k<=max_lm_rem;k++){
                   ll val_rem = k*V[j];
                  if(tempdp[k][j]==-1){
                       tempdp[k][j] = f(k,j,lm);
                  }
                   dp[i][j] = min(dp[i][j] , dp[i-val_rem][j-1] + tempdp[k][j] );
               }
           }
       }

      cout<<dp[k][c]<<endl;
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



