
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

ll power(ll x, ll y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

/*******************************************/
ll foo(ll a,ll b){
string x,y;
x = y ="";
while(a != 0){
	int r = a%2;
	if(r) x =  "1" +x;
	else x = "0" + x;
	a/=2;
}
while(b !=0){
	int r = b%2;
	if(r) y =  "1" +y;
	else y =  "0" + y;
	b/=2;
}
string temp,temp1;
temp = "",temp1 = "";
//cout << x << " " << y << endl;
int c = 0;
for(int i=0;i<x.length();i++){
	if(x[i] == '1'){
		c = 1;
		temp = temp + x[i];
	}
	else{
		if(c == 1)temp = temp + x[i];
	}
}
c = 0;
for(int i=0;i<y.length();i++){
	if(y[i] == '1'){
		c = 1;
		temp1 = temp1 + y[i];
	}
	else{
		if(c == 1)temp1 = temp1 + y[i];
	}
}
string x1 = temp+temp1;
string y1 = temp1+temp;
//cout << x1 << " " << y1 << endl;
ll m,n;
m=n=0;
for(int i=0;i<x1.length();i++){
	if(x1[i] == '1') m = m + power(2,x1.length()-1-i);
}
for(int i=0;i<y1.length();i++){
if(y1[i] == '1') n = n + power(2,y1.length()-1-i);
}

return (m-n);
}

void solve()
{
	int n;
	cin >> n;
	vl a(n);
	inv(a);
	ll mx = -10000000000;
	sortv(a);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i == j) continue;
            ll x = foo(a[i],a[j]);
            cout << x << endl;
            mx = max(x,mx);
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    for(int t1 = 1;t1<=t;t1++){
		//cout << "Case #" << t1 <<": ";
		solve();
    }
    return 0;
}

