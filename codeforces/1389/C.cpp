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
		string s;
		cin >> s;
		map<char,int> c;
		if(s.size() == 2) {
			cout << 0 << endl;
			return;
		}
		for(int i=0;i<s.size();i++){
			c[s[i]]++;
		}
		int mx = 2;
		int n = s.size();
		for(auto x: c) mx = max(mx,x.second);
		for(char a = '0';a <= '9';a++){
			if(c[a] > 0){
				for(char x = '0';x <= '9';x++){
					if(c[x] == 0 || x == a) continue;

					int sum = 0;
					int m = 0;
					for(int i=0;i<n;i++){
						if(s[i] == a && m == 0){
							m=1;
							//sum++;
						}
						else if(s[i] == x && m == 1){
							m=0;
							sum+=2;
						}
					}
					mx = max(mx,sum);
				}
			}
		}
		//cout << mx << endl;
		cout << n - mx << endl;
	}

	int main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		int t = 1;
		cin >> t;

		while (t--)
			solve();
		return 0;
	}

