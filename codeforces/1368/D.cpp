
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
    int n;
    vector<pi> v = { {1,1}, {1, 0}, {0,1}};
    cin>>n;
    cout<<3*n+4<<"\n0 0\n";
    for(int i=0;i<n+1;i++)
    	for(auto x:v)
    		cout<<i+x.first<<" "<<i+x.second<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


        solve();

    return 0;
}
