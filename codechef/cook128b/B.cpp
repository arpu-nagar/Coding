#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n,q; cin >> n >> q;
        int arr[n];
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            f|=arr[i];
        }
        cout << f << '\n';
        int bit[32];
        memset(bit,0,sizeof(bit));
        for(int i = 0;i<n;i++){
            for(int j = 0;j<32;j++){
                if((1<<j)&arr[i])bit[j]++;
            }
        }
        while(q--){
            int x,v;
            cin >> x >> v;
            x--;
            // remove 
            int re = arr[x];
            for(int j = 0;j<32;j++){
                if((1<<j)&re)bit[j]--;
            }
            arr[x] = v;
            // add
            for(int j = 0;j<32;j++){
                if((1<<j)&v)bit[j]++;
            }
            long long int ans = 0;
            for (int i = 0; i < 32; i++)
            {
                if(bit[i]) ans+=(1<<i);
            }
            cout << ans << '\n';
        }
    }
}