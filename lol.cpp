#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,n; 
        cin >> x >> y >> n;
        if(x == y){
            cout << 0 << '\n';
            continue;
        }
        int ans = 0;
        for(int i=0;i<=n;i++){
            if((x^i) < (y^i)) ans++;
        }
        cout << ans << '\n';
    }
}
