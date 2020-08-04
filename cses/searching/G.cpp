#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

ll sum(ll arr[],int n){
    ll mx, mxsf;
    mx = arr[0], mxsf = arr[0];
    for (int i = 1; i < n;i++){
        mxsf = max(arr[i], mxsf + arr[i]);
        mx = max(mx, mxsf);
    }
    return mx;
}

int main(){
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cout << sum(arr, n);
}