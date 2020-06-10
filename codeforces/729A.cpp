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
#define lol(x) cout << #x << " " << x << endl;
void solve()
{
    ll n;
    cin >> n;
    ll x,y;
    cin >> x >> y;
    ll w = (min(x,y) - 1) + max(x,y) - min(x,y);
    ll b = (min(n-x+1,n- y+1) - 1) + max(n-x+1, n-y+1) - min(n-x+1, n-y+1);
    if(w > b){
        cout << "Black"<< endl;
    }
    else
    {
        cout << "white" << endl;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    return 0;
}