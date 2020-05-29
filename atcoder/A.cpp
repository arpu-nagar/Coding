#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(){
    int a,b;
    cin >> a >> b;
    if(2*min(a,b) >= max(a,b))
    cout << 4*min(a,b)*min(a,b)<< endl;
    else
    {
        cout << max(a,b)*max(a,b) <<endl;
    }
    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
