#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int i = 0, j = n - 1;
    bool ans = false;
    while(i < j && !ans){
        if(arr[i]+arr[j] == k){
            cout << i + 1 << " " << j + 1;
            ans = true;
        }
        else if(arr[i]+arr[j] < k){
            i++;
        }
        else{
            j--;
        }
    }
    if(ans == false)
        cout << "IMPOSSIBLE";
}