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
	int r,g,b;
	cin >> r >> g >> b;
	priority_queue<int> red,green,blue;

	for(int i=0;i<r;i++) {
		int n;
		cin >> n;
		red.push(n);
	}
	for(int i=0;i<g;i++) {
		int n;
		cin >> n;
		green.push(n);
	}
	for(int i=0;i<b;i++) {
		int n;
		cin >> n;
		blue.push(n);
	}
	ll area = 0;
	int ok = 1;
	while(ok){
		int a,b,c;
		a=b=c=0;
		if(red.size())
		a  =red.top();
		if(green.size())
		b = green.top();
		if(blue.size())
		c = blue.top();
		//cout << a << " "<< b << " " << " "<< c << endl;
		if(a >= b && a >= c ){
			if(b >= c){
				area+= a*b;
				a = b =-1;
			}
			else{
				area+= a*c;
				a=c=-1;
			}
		}
		else if(b >=a && b >= c){
			if(a >= c){
				area+=a*b;
				a=b=-1;
			}
			else{
				area+=b*c;
				b=c=-1;
			}
		}
		else if(c >= a&& c>=b){
			if(b >= a){
				area+=c*b;
				c=b=-1;
			}
			else{
				area+=a*c;
				a=c=-1;
			}
		}
		//cout << area << endl;
		if(a == -1) red.pop();
		 if(b == -1) green.pop();
		 if(c == -1) blue.pop();

		 if(red.size() == 0 && green.size() == 0 || green.size() == 0 && blue.size() == 0 || blue.size() == 0 && red.size() == 0) ok = 0;
	}
	cout << area << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
	//cin >> t;

    while (t--)
        solve();
    return 0;
}





