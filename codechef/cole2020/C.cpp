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
	//

	int readInt () {
		bool minus = false;
		int result = 0;
		char ch;
		ch = getchar();
		while (true) {
			if (ch == '-') break;
			if (ch >= '0' && ch <= '9') break;
			ch = getchar();
		}
		if (ch == '-') minus = true; else result = ch-'0';
		while (true) {
			ch = getchar();
			if (ch < '0' || ch > '9') break;
			result = result*10 + (ch - '0');
		}
		if (minus)
			return -result;
		else
			return result;
	}
	void solve()
	{
		string s;
		cin >> s;
		int n = s.length();
		int t;
		cin >> t;
		stack<int> x;
		int curr = n;
		vector<int> suf(n+1,0);
		for(int i=n-2;i>=0;i--){
			if(s[i] == '(') {
					curr = i;
					suf[i] = curr;
				}
			else{
				suf[i] = curr;
			}
		}
		unordered_map<int,int> mp;
		for(int i=0;i<n;i++){
			if(s[i] == '('){
					x.push(i);
				}
			else if(s[i] == ')'){
				if(!x.empty()){
					mp[x.top()] = i;
					x.pop();
				}
			}
		}
		while(t--){
			int q = readInt();
			int p = suf[q-1];
			if(p == n){
				cout << n << endl;
				continue;
			}
			else{
				if(mp[p] == 0){
					cout << "-1" << endl;
				}
				else{
					cout << mp[p]+1 << endl;
				}
			}

		}
	}

	int main()
	{
		//sieve();
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		int t = 1;
		cin >> t;

		while (t--)
			solve();
		return 0;
	}
