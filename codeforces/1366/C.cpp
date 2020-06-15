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
    int n,m;
    cin >> n >> m;  
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
    }
    cout << count << endl;


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