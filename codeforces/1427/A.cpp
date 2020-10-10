
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
	int n1;
	cin >> n1; 
	vi a(n1);
	inv(a);
	vi n;
	vi p;
	ll ne,po;
	ne=po=0;
	for(auto x: a) {
		if(x < 0) {
			n.pb(x);
			ne+=x;
		}
		else{
			po+=x;
			p.pb(x);
		}
	}
	if(ne+po == 0){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
		sortv(n);
		rsortv(p);
		if(abs(ne) > abs(po)){
			for(auto x: n) cout << x << ' ';
			for(auto x: p) cout << x << ' ';
			cout << endl;
		}
		else{
			for(auto x: p) cout << x << ' ';
			for(auto x: n) cout << x << ' ';
						cout << endl;

		}
	}	
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




