#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n],brr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    for(int j=0;j<n;j++)
        cin >> brr[j];

    int i, j;
    i = j = 0;
    vector<int> ans;

    while(i < n && j < n){
        if(arr[i]>brr[j]){
            ans.emplace_back(brr[j]);
            j++;
        }
        else{
            ans.emplace_back(arr[i]);
            i++;
        }
    }
    if(i < n){
        while(i < n)
        ans.emplace_back(arr[i++]);
    }
    else{
        while(j < n)
            ans.emplace_back(brr[j++]);
    }
    for(auto x: ans)
        cout << x << " ";

}