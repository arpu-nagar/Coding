#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n],brr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        ll x1,x2;
        x1=x2=0; ll sum = 0;
        for(int i=0;i<n;i++){
            if(x1==x2 && arr[i]==brr[i]){
                sum+=arr[i];
            }
            x1 += arr[i];
            x2 += brr[i];
        }
        cout << sum << "\n";
    }
    return 0;
}