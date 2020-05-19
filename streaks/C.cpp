#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it: a){
        cin >> it;
    }
    sort(a.begin(),a.end());
    int e,o;
    e=o=0; ll sum = 0;
    for(int i=0;i<n;i++){
        if(a[i]%2 == 0){
            sum+=a[i];
        }
        else
        {
            o++;
        }
    }
    int flag = o;
    for(int i=n-1;i>=0;i--){
        if(a[i]%2!=0){
            if(o%2 == 0){
            sum+=a[i];
        }
        else
        {
            if(flag == 1){
                break;
            }
            else
            {
                sum+=a[i];
                flag--;
            }
            
        }}
        
    }
    cout << sum << endl;
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
