#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        map<int,int> mp;
        for(int i = 0;i < n;i++){
            int a; cin >> a;
            if(x > 0 && mp[a] == 1)x--;
            else mp[a]++;
        }
        long long ans = 0;
        for(auto a: mp) ans+=1;
        cout << ans -x << '\n';
    }
}