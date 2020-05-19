#include <bits/stdc++.h>
using namespace std;
using ll = long long int;


void solve()
{
    ll a,k;
    cin >> a >> k;
    for(int i=1;i<k;i++){
        ll tem = a; ll max1 = 0,min1=10;
        while(tem!=0){
            ll r = tem%10;
            max1 = max(max1,r);
            min1 = min(min1,r);
            tem/=10;
        }
        ll x = a + max1*min1;
        if(x==a)
        {
            a=x;
            break;
        }
        a=x;
    }
    cout << a << endl;
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