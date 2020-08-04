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
    vl arr(n);
    inv(arr);
	int ne,po;
	int z = 0;
	ne=po=0;
	for(int i=0;i<n-1;i++){
		if(arr[i+1]-arr[i] > 0){
			po++;
		}
		else if(arr[i+1]-arr[i] < 0){
			ne++;
		}
		else{
			z++;
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i] < 0){
			if(i%2 == 0){
				cout << arr[i] << " ";
			}
			else{
				cout << arr[i]*-1 << " ";
			}
		}
		else{
			if(i%2 != 0){
				cout << arr[i] << " ";
			}
			else{
				cout << arr[i]*-1 << " ";
			}
		}
	}
	cout << endl;

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

