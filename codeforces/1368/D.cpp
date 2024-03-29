
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
    int n;
    cin >> n;
    int arr[n][n] = {0};

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    if(n == 1){
        cout << arr[0][0]<< endl;
        return;
    }
    ll sum = 0;
    for(int i=0;i<n;i++){
        int max1 = 0;int max2 = 0;
        for(int j= 0;j<n;j++){
            if(i != j){
                max1|=arr[i][j];
                max2|=arr[j][i];
            }
        }
        sum+= (max1|max2);
    }
    cout << sum << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--)
        solve();

    return 0;
}
