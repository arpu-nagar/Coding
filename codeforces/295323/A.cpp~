
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
	vi a(n);
	inv(a);
	ll sum = 0;
	ll mx =0;
	for(auto x: a){
		sum+=x;
		mx = max(mx,sum);
	}
	if(mx <= 0){
		cout << 0 << endl;
		return;
	}
	ll sum1 = 0;
	for(int i=0;i<n;i++){
		sum1+=a[i];
		if(mx == sum1) {
			cout << i+1 << endl;
			return;
		}
	}
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




