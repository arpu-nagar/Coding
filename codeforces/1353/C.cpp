#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(){
    int n;
    cin >> n;
    ll arr[n+1]={0};
    arr[1] = 0;
    ll ans = 0;
    ll a = 1;
    for(int i=3;i<=n;i+=2){
        arr[i] = a*(2*i +2*(i-2));
        a++;
    }
    for(int i=1;i<=n;i+=2){
        ans+=arr[i];
    }
    cout << ans << endl;
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