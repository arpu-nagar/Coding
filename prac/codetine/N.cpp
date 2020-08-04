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
void solve()
{
    int n;
    cin >> n;
    vi a(n);
    inv(a);
    int c = 0;

    vector<string> s;

    int j = 0;
    for(int i=0;i<n;i++){
		string y = "";
		if(c == 0){
			for(int x=0;x<a[i];x++) y+='a';
			++j;
			s.push_back(y);
			y = "";
			for(int x = 0;x<a[i];x++) y+='a';
			s.push_back(y);
			y = "";
		}
		else if(c == 1){
			for(int x=0;x<a[i];x++) y+='b';
			++j;
			s.push_back(y);
			y = "";
			for(int x = 0;x<a[i];x++) y+='b';
			s.push_back(y);
			y = "";
		}
		else{
			for(int x=0;x<a[i];x++) y+='c';
			++j;
			s.push_back(y);
			y = "";
			for(int x = 0;x<a[i];x++) y+='c';
			s.push_back(y);
			y = "";
		}
		c++;
		c=c%3;
    }

    for(auto x: s){
		cout << x << endl;
    }

}
/*
d
*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
	cin >> t;

    while (t--)
        solve();
    return 0;
}

