
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
//
void solve()
{
	int n;
	cin >> n;
	vi arr(n);
	inv(arr);
	int dp[n];
	memset(dp,0,sizeof(dp));

	for(int i=1;i<n;i++) dp[i] = arr[i]-arr[i-1];
	int mx = 1;
	int curr = 1;
	int sum = 0;
	set<int> s;
	s.insert(arr[0]);
	for(int i = 1;i<n;i++){
		if(i == 1){
			curr++;
			sum = dp[i];
			s.insert(arr[i]);
			continue;
		}

		if(sum == dp[i]){
			curr++;
			s.insert(arr[i]);
		}
		else{
			if(s.size() >= 1){
				mx = max(mx,curr);
				curr = 2;
				s.clear();
				sum = dp[i];
				s.insert(arr[i]);
			}
			else{
				curr = 2;
				sum = dp[i];
				s.clear();
				s.insert(arr[i]);
			}
		}
	}

	if(s.size() >= 1){
		mx = max(mx,curr);
	}
	cout << mx << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
	cin >> t;

    for(int i=1;i<=t;i++){
		cout << "Case #" << i << ": ";
		solve();
    }
    return 0;
}

