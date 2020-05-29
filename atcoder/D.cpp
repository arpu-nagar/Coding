#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n, k;
    cin >> n >> k;
    int ans = 1;
    int ok = 0;
    int temp = 0;
    for (int i = 1; i <= (int)sqrt(n); i++)
    {
        if(n%i == 0 && i<=k){
            if(n/i <= k){
                ans = n/i; ok =1;
            }
            else
            {
                temp = i;
            }
            
        }
        if(ok == 1)
        break;
    }
    if(ok == 1)
    cout << (n/ans) << endl;
    else
    {
        cout << (n/temp) << endl;
    }
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
