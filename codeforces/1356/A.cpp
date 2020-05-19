#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    ll x = a-b;
    if(x <= 0)
    {
        cout << b << endl;
    }
    else
    {
        ll k = c - d;
        if(k <= 0){
            cout << "-1" << endl;
        }
        else
        {
            cout << b+ c*(ll)ceil((a-b)*1.0/k) << endl;
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
        solve();

    return 0;
}