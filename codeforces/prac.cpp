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

void solve()
{
    ll x;
    cin >> x;
    ll ans = 1<<x;
    ll ans1,ans2 = 0;
    ans1 = 0;
    for(int i=0;i<(x/2);i++){
        ans1+=1<<(i+1);
    }

    for(int i=x/2;i<x;i++){
        ans2+=(1<<(i));
    }
    cout << ans-ans2+ans1 << endl;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}

