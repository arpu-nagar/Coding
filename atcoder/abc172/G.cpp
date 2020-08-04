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
    vi a(n);
    inv(a);
    sortv(a);
    map<int,int> mp;
    int max1 = -1;
    for(int i=0;i<n;i++){
		mp[a[i]]++;
		max1 = max(max1,a[i]);
    }
    int c = 0;
    int arr[n];
    int i = 0; int j = n-1;
    for(auto x = mp.begin();x != mp.end();x++){
		if(x->first != max1){

			if(x->second >= 3){
				c = 1;
			}

			if(x->second == 1){
				arr[i++] = x->first;
			}
			else if(x->second == 2){
				arr[i++] = x->first;
				arr[j--] = x->first;
			}

		}
		else if(x->first == max1){

			if(x->second >= 2){
				c = 1;
			}

			if(x->second == 1){
				arr[i++] = x->first;
			}

		}
    }
    if(c == 1){
		cout << "NO\n";
    }
    else{
      cout << "YES\n";
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
    }
}

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

cout <<"yes";
    vector<pair<ll,ll>> lol;

    for(int i = 0;i<32;i++){
		lol[i].first = pow(2,i)*x[i];
		lol[i].second = i;
    }
	cout <<"yes";
    sort(lol.begin(),lol.end());
    for(int i =31; i>=0;i--){
		cout << lol[i].first << " " << lol[i].second;
    }
