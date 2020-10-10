
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
	int n, k;
	cin >>  n >> k;
	string s;
	cin >> s;
	int ls = 0;
    ll ans = 0;
    vi dp(n);
	for(auto x : s) if(x == 'L') ls++;
	vector<pair<int,int>> arr(n);
	int c = 0;
	for(int i=0;i<n;i++){
		if(s[i] == 'W'){
			c++;
			arr[c].fi = arr[c].se = i;
			for(int j = i+1;j<n;j++){
				if(s[j] != 'W') break;
				arr[c].se = j;
				i = j;
			}
		}
	}
	vi cost(n);
	for(int i = 2;i<c;i++){
		cost[i] = arr[i].fi - arr[i-1].se - 1;
	}
	if(c >= 1){
		sortv(cost);
	}
	int temp = k;
	for(int i=2;i<=c;i++){
		if(cost[i] <= k && k != 0){
			dp[i] = 1;
			k-=cost[i];
			ans+=(arr[i].se = arr[i].fi +1)*2ll;
			if(dp[i-1] == 0){
				ans+=1+((arr[i-1].se-arr[i-1].fi+1)-1)*2;
                    if(i!=2)
                    ans-=1+(arr[i-1].se-arr[i-1].fi)*2;
			}
			else{
				ans+=((arr[i-1].se-arr[i-1].fi+1))*2;
                    if(i!=2)
                    ans-=(arr[i-1].se-arr[i-1].fi+1)*2;
			}
			ans+=cost[i]*2;
		}
		else{
			if(i==2)
                {
                    ans+=1+(arr[i-1].se-arr[i-1].fi)*2;
                }
			ans+=1+(arr[i].se-arr[i].fi)*2;
		}
	}

	if(c == 1){
		ans+=1+(arr[1].se-arr[1].fi)*2;
	}
	
	if(k > 0){
		if(temp - k != ls){
			int tot=min(k,ls-temp+k);
                if(ls!=n)
                ans+=tot*2;
                else 
                ans+=1+(tot-1)*2;
		}
	}
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

