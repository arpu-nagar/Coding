#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
void solve()
{
    int n,m;
    cin >> n >> m;
    int a;
    cin >> a;
    ll no = ceil(n*1.0/a*1.0) * ceil(m*1.0/a*1.0);
    cout << no << endl;
}

int main()
{
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
