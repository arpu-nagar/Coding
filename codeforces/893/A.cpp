
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

void solve(){
	int n;
	cin >> n;
	set<int> s;
	s.insert(1);
	s.insert(2);
	int o = 3;
	for(int i=1;i<=n;i++){
		int a;
		cin >> a;
	   if(s.find(a) == s.end()){
		   cout << "NO" << endl;
		   return;
	   }
		set<int> s1;
		s1.insert(a);
		s1.insert(o);
		for(auto x : s){
			if(x != a){
				o = x;
			}
		}
		s = s1;		
	}
	cout << "YES" << endl;	
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




