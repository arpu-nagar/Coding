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
#define pb push_back

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
	string ans = "";
	while(n > 0){
		ans = (char) (97 + (n-1)%26) + ans;
        n = (n-1)/26;
		}
	cout << ans;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
		solve();
    return 0;
}
