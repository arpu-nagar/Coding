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
    int mx = arr[0];
    for (int i = 1; i < n;i++){
        mx = max(mx, arr[i]);
    }

    int c = 0;
    int mxl = 0;
    for (int i = 0; i < n;i++){
        if(arr[i] == mx && mxl == 0){
            mxl = 1;
        }
        else if(mxl > 0 && arr[i] == mx){
            mxl++;
        }
        else if(arr[i] != mx){
            c = max(c, mxl);
            mxl = 0;
        }
    }
    c = max(mxl, c);
    cout << c << endl;
}