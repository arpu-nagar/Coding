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
    vi a(n);
    inv(a);
    int o,ne;
    o = ne = 0;
    int count = 1;
    int arr[n] = {0};
    arr[0] = 1;
    for(int i=1;i<n-1;i++){
        if(a[i] > a[i-1] && a[i] > a[i+1]){
            arr[i] = 1;
            count++;
        }

        if(a[i] < a[i-1] && a[i] < a[i+1]){
            arr[i] = 1;
            count++;
        }
    }
    cout << count+1 << endl;

    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            cout << a[i] << " ";
        }
    }
    cout << a[n-1] <<endl;

    // if(o < ne){
    //     cout << n-ne+1<< endl;
    //     cout << "1 " << n << " ";
    //     for(int i=ne+1;i<n;i++){
    //         cout << a[i] << " ";
    //     }
    //     cout << endl;
    // }
    // else
    // {
    //     cout << n - o +1 << endl;
    //     cout << n << " 1" << " ";
    //     for (int i = o + 1; i < n; i++)
    //     {   
    //         cout << a[i] << " ";
    //     }
    //     cout << endl;
    // }
    
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