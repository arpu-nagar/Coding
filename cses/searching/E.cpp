#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n;i++){
        cin >> arr[i].second >> arr[i].first;
    }
    sort(arr.begin(), arr.end());
    int curr = 0;
    long ans = 0;
    for(auto x : arr){
        if(x.second >= curr){
            ans++;
            curr = x.first;
        }
    }
    cout << ans;
}