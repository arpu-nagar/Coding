
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
	int n; cin >> n;
	vi even;
	vi odd;
	for(int i=0;i<n;i++){
		int p;
		cin >> p;
		if(p%2) odd.push_back(p);
		else
			even.push_back(p);
	}
	if(even.size() == 0){
		cout << -1 << endl;
		return;
	}
	sortv(even);
	sortv(odd);
	int od = odd.size(), ev = even.size();
	string ans = "";
	while(od > 0 && ev > 1){
		if(odd[od-1]>even[ev-1]){
			ans+=to_string(odd[--od]);
		}
		else
			ans+=to_string(even[--ev]);
	}

	while(od>0){
		ans+=to_string(odd[od-1]);
		od--;
	}
	while(ev>0){
		ans+=to_string(even[--ev]);
	}
	cout << ans << endl;
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




