#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];

    sort(arr, arr + n);

    int c = 0;
    int i = 0, j = n - 1;
    while(i <= j){
        if(arr[i] + arr[j] <= k){
            i++;
            j--;
            c++;
        }
        else{
                c++;
                j--;
        }
    }
    cout << c;
}