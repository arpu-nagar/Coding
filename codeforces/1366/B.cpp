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
    int n,x,m;
    cin >> n >> x >> m;
    int l1,r1;
    l1 = r1 = 0;
    int c = 0;
    for(int i=0;i<m;i++){
        int l,r;
        cin >> l >> r;
        if(x >= l && x <= r && c == 0){
            l1 = l;
            r1 = r;
            c++;
        }

        if(l <= l1 && r>=l1){
            l1 = l;
        }

        if(r >= r1 && l<=r1){
            r1 =r;
        }
    }
    cout << r1-l1+1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}