#include <bits/stdc++.h>
using ll = long long int;
const int N = 3e5;
using namespace std;

void solve()
{
    int n,m,k;
    cin >> n >> m >> k;
    int p = n/k;
    if(m <= p){
        cout << m << "\n";
    }
    else{
        int z = p - ((m-p)/(k-1));
        if (((m - p) % (k - 1)) >= 1)
            cout << z - 1 << "\n";
            else
            {
                cout << z << endl;
            }
            
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