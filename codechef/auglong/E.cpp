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

void solve(){
		int n,k;
        cin>>n>>k;
        vi a(n);
        inv(a);
        map<int,int>mp;
        int ans=0,vc=0,t=1;
        int col[n+1][n+1];
        memset(col,0,sizeof(col));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                col[i][j]=0;
        }
        for(int i=0;i<n;i++)
        {
            mp.clear();
            for(int j=i;j<n;j++)
            {
                col[i][j]=(j==0)?0:col[i][j-1];
                if(mp.count(a[j]))
                {
                    if(mp[a[j]]==1)
                    {
                         col[i][j]++;
                    }
                    col[i][j]++;
                }
                mp[a[j]]++;

            }

        }

    ans=MOD;
    int table=100;
    int dp[101][1001]={0};
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n+1;i++)
        dp[1][i]=col[0][i-1];
    for(int i=2;i<=table;i++)
    {
        dp[i][1]=0;
    }
    for(int i=2;i<=table;i++)
    {
        for(int j=2;j<=n;j++)
        {
            int best=MOD;
            for(int p=1;p<j;p++)
            {
                best=min(best,dp[i-1][p]+col[p][j-1]);
            }
            dp[i][j]=best;
        }
    }
    for(table =1;table<=100;table++)
    {
        ans=min(table*k+dp[table][n],ans);
    }
    cout<<ans<<endl;
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
