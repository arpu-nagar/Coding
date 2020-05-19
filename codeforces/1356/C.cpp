#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

using ll = long long int;

void solve()
{
    int n;
    cin >> n;
    double ans = 1.000000000;
    if(n==2){
        cout  << ans << endl;
    }
    else
    {
        ans = 1.0 / (tan(3.1415926 / (2 * n)));
        cout  << abs(ans) << endl;
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