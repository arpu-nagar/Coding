
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
}:
const int N = 2e5+1;
const int inf =1e9;
void solve(){
	int n;
	cin >> n;
	int ans = 0;
	
	int curr = 0;
	int c = 0;
	vi a(n);
	inv(a);
	int dp[n+1];
	memset(dp,0,sizeof(dp));
	if(n<=3){
		cout << a[0] << endl;
		return;
	}

	dp[0] = a[0];
	dp[1] = dp[0]+a[1];
	dp[2] = dp[0]+a[2];
		for(int i=3;i<n;i++){
		int ans = min(dp[i-1],dp[i-2]);
		ans = min(ans,dp[i-3]);
		dp[i] = a[i]+ ans;
	}
	cout << min({dp[n-1],dp[n-2],dp[n-3]}) << endl;
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




