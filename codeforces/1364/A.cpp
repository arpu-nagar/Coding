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
    int n,x;
    cin >> n >> x;
    vi a(n);
    inv(a);
     int sum = 0;
    for(int i=0;i<n;i++){
     sum+=a[i];   
    }
    if(sum%x != 0){
        cout << n << endl;
    }
    else
    {
        int num = 0;int pi,pj;
        pi = pj = 0;int j;int c = 0;int c1 = 0;
        for( j=0;j<n;j++){
            num+=a[j];
            if(num%x != 0){
                pi = j+1;
            }
            if(pi != 0) break;
        }
        if(j == n) c=1;
        num = 0;
        for ( j = n-1; j >=0 ; j--)
        {
            num += a[j];
            if (num % x != 0)
            {
                pj = n-j;
            }
            if (pj != 0)
                break;
        }
        if (j == 0)
            c1 = 1;
        if(c !=1 && c1 !=1)
        cout << n - min(pi,pj) << endl;
        else
        {
            cout << "-1\n";
        }
        
    }
    
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