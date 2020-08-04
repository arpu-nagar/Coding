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
	const int mod = 1e9 + 7;
	int dp[5001][5001];
	int m,n;
	vi a,b;
	const int INF = 1e9;

	int foox(int i,int j){
	if(i == n) return 0;
	if(j == m) return INF;

	if(dp[i][j] != -1) return dp[i][j];

    int v1, v2;
    v1 = foox(i + 1, j + 1) + abs(a[i] - b[j]);

    v2 = foox(i, j + 1);
    dp[i][j] = min(v1, v2);
    return dp[i][j];
	}

	void solve()
	{
	   cin >> n >> m;
	   for(int i=0;i<n;i++){
		int x;
		cin >> x;
		a.push_back(x);
	   }

	   for(int i=0;i<m;i++){
		int x;
		cin >> x;
		b.push_back(x);
	   }

	   for(int i=0;i<n;i++)
	   for(int j=0;j<m;j++){
		 dp[i][j] = -1;
	   }
	   sortv(a);
	   sortv(b);
		foox(0,0);

		cout << dp[0][0] << endl;



	}

	int main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		int t = 1;
		//cin >> t;

		while (t--)
			solve();
		return 0;
	}



