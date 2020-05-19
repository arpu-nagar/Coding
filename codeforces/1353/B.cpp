#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n),b(n);
    for(auto &it: a){
        cin >> it;
    }
    for(auto &it: b){
        cin >> it;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<k;i++){
        if(a[i] < b[n-i-1]){
            a[i] = b[n-i-1];
        }
    }
    ll sum = 0;
    for(int i=0;i<n;i++)
    sum+=a[i];
    cout << sum << endl;
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