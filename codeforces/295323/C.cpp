
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
const int inf = 1e9;
void solve(){
	int n,k;
	cin >> n >> k;
	vi a(n);
	inv(a);
	int dp[n];
	memset(dp,1000000,sizeof(dp));
	dp[0] = 0;
	for(int i=0;i<n;i++){
		for(int j =1;j<=k;j++){
			if(i+j < n){
				dp[i+j] = min(dp[i+j], (max(a[i],a[j+i]) - min(a[i],a[j+i]) + dp[i]));
			}
		}
	}

	cout << dp[n-1] << endl;
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




