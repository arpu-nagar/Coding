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
	string foo(int n)
{
    string res = "";
    while (n >= 1)
    {

        if (n & 1)
        {
            res = res + "3";
            n = (n-1)/2;
        }

        else
        {
            res = res + "8";
            n = (n-2)/2;
        }
    }

   reverse(res.begin(), res.end());
   return res;
}
	bool ok(int i,int j,int n,int m){
		if(i < n && i >= 0 && j >= 0 && j < m) return true;
		return false;
	}
	void solve()
	{
	   int n,m;
	   cin >> n >> m;
	   char grid[n][m];
	   for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin >> grid[i][j];
	   }
	   vector<pair<int,int>> dir = {
	   {-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}
	   };
	   string x = "ACMMANIPAL";
	   queue<pair<int,int>> s;
	   for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(grid[i][j] == 'A'){
				int dp[n][m];
				for(int i=0;i<n;i++)
		for(int j=0;j<m;j++) dp[i][j] = 0;
				dp[i][j] = 1;
				s.push({i,j});
				int c = 0;
				while(!s.empty()){
					pair<int,int> pr = s.front();
					s.pop();
					if(grid[pr.fi][pr.se] == x[c]){
					c++;
					dp[pr.fi][pr.se] = 1;
					//cout << c << " " << pr.fi << " " << pr.se << endl;
					if(c == x.length()){
						cout << "YES" << endl;
						return;
					}
					for(auto d: dir){
						if(ok(pr.fi + d.fi,pr.se+d.se,n,m)){
							if(grid[pr.fi + d.fi][pr.se+d.se] == x[c] && dp[pr.fi + d.fi][pr.se+ d.se] == 0){
								s.push({pr.fi + d.fi,pr.se+d.se});
							}
						}
					}
					}
				}
			}
		}
	   }
	   cout << "NO" << endl;
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



