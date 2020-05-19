#include <bits/stdc++.h>
using namespace std;
using ll = long long int;


void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int x = a;
    int y = b;
    int z = c;
    ll ans = 0;
    for(int i=d;i>=c;i--){
        int l = a,r=b;
        while(l<=b && r<=c){
            if(l+r > i){
                ans+=(r-l);
                r++;
            }
            else
            {
                l++;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();

    return 0;
}