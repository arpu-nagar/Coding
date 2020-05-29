#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve()
{
    ll x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << (x2-x1)*(y2-y1)*1ll + 1<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}