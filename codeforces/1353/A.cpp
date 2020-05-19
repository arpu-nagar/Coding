#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(){
    int m,n;
    cin >> n >> m;
    if(n==1){
        cout << "0\n";
    }
    else
    {
        if(n > 2)
        {
            cout << m*2 << endl;
        }
        else
        {
            cout <<  m << endl;
        }
        
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}