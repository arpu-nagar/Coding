#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
void solve()
{
    int p;
    cin >> p;
    if(p%2 == 0){
        cout << p*p/4 << endl;
    }
    else
    {
        cout << (p/2)*(p/2+1) << endl;
    }
    
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
