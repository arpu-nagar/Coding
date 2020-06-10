/**
 *  Hi, I'm Arpan.
 *  Hardwork beats talent if talents doesn't work hard, friend me if you want to. ✌.|•͡˘‿•͡˘|.✌
 * 
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
#define inv(v)         \
    for (auto &it : v) \
        cin >> it;
#define MOD 1000000007

void solve()
{
    int n,k;
    cin >> n >> k;
    if(n%k == 0){
        cout << "YES" << endl;
        int x = n/k;
        for(int i=0;i<k;i++){
            cout << x << " ";
        }
        cout << endl;
    }
    else if(n < k){
        cout << "NO" << endl;
    }
    else
    {
        if(n%2 != 0 && k%2 != 1){
            cout << "NO" << endl;
        }
        else if(n%2 == 0 && k%2 == 0)
        {
            cout << "YES" << endl;
            for(int i=0;i<k-1;i++){
                cout << "1 "; 
            }
            cout << n-k+1 << endl;
        }
        else if(n%2 != 0 && k%2 != 0){
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; i++)
            {
                cout << "1 ";
            }
            cout << n - k + 1 << endl;
        }
        else if (n % 2 != 1 && k % 2 != 0)
        {
            if(n >= 2*k){
                cout << "YES" << endl;
                for (int i = 0; i < k - 1; i++)
                {
                    cout << "2 ";
                }
                cout << n - 2*k +2 << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            
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
    {
        solve();
    }
    return 0;
}