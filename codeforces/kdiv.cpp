#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    ll n,k;
    cin >> n >> k;
    ll p = (k-1)/(n-1);
    cout << k + p << "\n";
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