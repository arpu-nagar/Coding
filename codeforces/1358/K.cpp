#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve()
{
    int n,m;
    cin >> n >> m;
    if(max(n,m)%2 == 0 || min(n,m)%2==0){
        cout << min(n,m)*max(m,n)/2 << endl;
    }
    else{
        cout << max(n,m)*(min(m,n)/2) + max(m,n)/2 + 1<< endl;
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