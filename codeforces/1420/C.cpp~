
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
	int n,q;
	cin >> n >> q;
	vl a(n);
	inv(a);

	bool inc = false;
	ll ans = 0;
	if(n == 1){
		cout << a[0] << endl;
		return;
	}

	if(n == 2){
		cout << max(a[0],a[1]) << endl;
		return;
	}
	ll m = -1;
	if(a[0] < a[1]){
		inc = true;
		m = a[1];
	}
	else
	{
		inc = false;
		m = a[1];
		ans+=a[0];
	}
	for(int i=2;i<n;i++){
	if(inc){
			if(a[i] > a[i-1]){
				m = a[i];
			}
			else{
				ans+=m;
				//cout << m << " " << ans << " " << '+' << endl;
				m = a[i];
				inc = false;
			}
		}
		else{
			if(a[i] < a[i-1]){
				m = a[i];
			}
			else{
				ans-=m;
				m = a[i];
			//	cout << m << " " << ans << " " << '-' << endl;
				inc = true;
			}
		} 
		/*if(inc){
			if(a[i+1] > a[i]){

			}
			else{

			}
		}
		else{
			if(a[i+1] < a[i]){

			}
			else{
				ans-=a[i-1];
			}
		}*/


	}
	if(inc) ans+=a[n-1];
	cout << ans << endl;
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




