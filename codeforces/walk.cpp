#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int x, y;
    x = y = -1;
    for (int i = n - 1; i >= 0;i--){
        if(arr[i] != arr[0] && x == -1){
            x = i;
        }

        if(arr[i] != arr[n-1] && i != n-1)
            y = i;
    }
        cout << max(x,n-y-1) << endl;
    return 0;   
}