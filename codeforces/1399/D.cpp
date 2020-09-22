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
	string s;
	cin >> s;
	stack<int> z,o;
	vector<int> ans;
	if(s[0] == '1')o.push(1);
	else
		z.push(1);
	ans.push_back(1);
	int c = 1;
	for(int i = 1;i<n;i++){
		if(s[i] == '1'){
			if(!z.empty()){
				int s1 = z.top();
				z.pop();
				ans.push_back(s1);
				o.push(s1);
			}
			else{
				o.push(++c);
				ans.push_back(c);
			}
		}
		else{
			if(!o.empty()){
				int s1 = o.top();
				o.pop();
				ans.push_back(s1);
				z.push(s1);
			}
			else{
				z.push(++c);
				ans.push_back(c);
			}
		}
	}
	cout << c << endl;
	for(auto x: ans) cout << x << " ";
	cout << endl;
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

