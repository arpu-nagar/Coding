/**
 *  Hi, I'm Arpan.
 *  Hardwork beats talent if talents doesn't work hard, friend me if you want to. ✌.|•͡˘‿•͡˘|.✌
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

ll power(ll x, ll y)
{
    ll temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
        return x*temp*temp;
}

void solve()
{
    ll n;
    cin >> n;
    string x = "codeforces";
    if(n == 1) cout << x;
    else{
	ll c = 1;
    while(power(c,10) < n){
		c++;
    }
	ll k = 0;ll p = power(c-1,10);
	for(int i=0;i<10;i++){
		if(p < n){
			p=p/(c-1);
			p*=c;
			k++;
		}
		else{
			break;
		}
	}
	string s = "";
	for(ll i=0;i<k;i++){
		ll o = 0;
		while(o < c){
            s+=x[i];
            o++;
		}
	}

	for(int i=k;i<10;i++){
		ll o = 0;
		while(o < c-1){
            s+=x[i];
            o++;
		}
	}
	cout << s << endl;
	}

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        solve();

    return 0;
}
