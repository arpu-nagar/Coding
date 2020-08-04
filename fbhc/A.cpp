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

void solve()
{
	int n;
	cin >> n;
	vector<vector<char> > ans( n , vector<char> (n, 'Y'));
	string inc,out;
	cin >> inc;
	cin >> out;

	for(int i=0;i<n;i++){
		int ok = 1;
		for(int j=i;j>=0;j--){
			if(i == j) continue;
			if(ok == 0){
				ans[i][j] = 'N';
				continue;
			}
			if(out[j+1] != 'Y' || inc[j] != 'Y'){
				ok = 0;
				ans[i][j] = 'N';
			}
		}
		ok = 1;
		for(int j=i;j<n;j++){
			if(i == j) continue;
			if(ok == 0){
				ans[i][j] = 'N';
				continue;
			}
			if(out[j-1] != 'Y' || inc[j] != 'Y'){
				ans[i][j] = 'N';
				ok = 0;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << ans[i][j];
		}
		cout << endl;
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
   // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
   #endif
    int t;
    cin >> t;
    for(int t1 = 1;t1<=t;t1++){
		cout << "Case #" << t1 <<":\n";
		solve();
    }
    return 0;
}
