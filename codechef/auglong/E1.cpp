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
/*
int cp(map<int,int> mp){
int c = 0;
for(auto x : mp){
	if(x.se > 1) c+=x.se;
}
return c;
}

ll foo(vi& a,int i,map<int,int> mp,int k,int tot){
	if(i == a.size()){
		return tot + k + cp(mp);
	}
	mp[a[i]]++;
	int c1 = foo(a,i+1,mp,k,tot);
	mp[a[i]]--;
	int c2 = foo(a,i+1,mp,k,tot);
	c2+=cp(mp)+k;

	return min(c1,c2);
}
*/
void solve()
{
	//vector<vector<int>> dp(1001, vector<int> (1001,0));
	int n,k;
	cin >>n >> k;
	vi a(n);
	inv(a);
	map<int,int> mp;
	vector<map<int,int>> se;
	mp[a[0]]++;
	for(int i=1;i<n;i++){
		if(mp[a[i-1]] == 1 && a[i-1] == a[i-2]){
			se.push_back(mp);
			mp.clear();
			mp[a[i]]++;
			continue;
		}
		if(mp[a[i]] == 0 && a[i-1] != a[i]){
			mp[a[i]]++;
		}
		else{
			se.push_back(mp);
			mp.clear();
			mp[a[i]]++;
		}

		/*if(mp[a[i]] == 1 && a[i-1] == a[i]){
			se.push_back(mp);
			mp.clear();
		}*/
	}
	se.push_back(mp);

	ll ans = k;
	mp.clear();
	mp.insert(se[0].begin(),se[0].end());
	/*for(auto x: se){
			cout << "1" << endl;
		for(auto m : x) cout << m.fi << " - " << m.se << endl;

	}*/
	//for(auto m : mp) cout << m.fi << " - " << m.se << endl;
	int table = 1;
	int tot = 0;
	int g = 0;
	for(int i= 1;i<se.size();i++){
		for(auto x: se[i]){
			if(mp[x.fi] == 1){
				tot+=x.se+1;
			}
			else if(mp[x.fi]> 1){
				tot+=x.se;
			}
			mp[x.fi]+=x.se;
		}
		if(ans+tot <= ans + k){
			ans+=tot;
			tot=0;
		}
		else{
			mp.clear();
			mp.insert(se[i].begin(),se[i].end());
			ans+=k;
			table++;
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




