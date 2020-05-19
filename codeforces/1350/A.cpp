#include<bits/stdc++.h>
using namespace std;

using ll = long long int;

ll foo(ll n){
    for(int i=2;i<n;i++){
        if(n%i == 0)
        {
            return i;
        }
    }
    return n;
}

void solve(){
    ll n,k;
    cin >> n >> k; 
    ll some = foo(n);
    if(some == n){
        n = n+ n +2*(k-1);
    }
    else
    {
        if(some%2 == 0){
            n = n+ k*2;
        }
        else
        {
            n = n+ some + (k-1)*2;
        }
    }
    
    cout << n << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}