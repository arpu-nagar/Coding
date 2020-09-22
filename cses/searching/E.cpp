#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> arr;

    for (int i = 0; i < n;i++){
        int x, y;
        cin >> x >> y;
        arr.push_back({x, 1});
        arr.push_back({y, 2});
    }
    sort(arr.begin(), arr.end());

    int mx = -1;
    int curr = 0;

    for(auto x : arr){
        if(x.second == 1)
            curr++;
        else
            curr--;

        mx = max(mx, curr);
    }
    cout << mx;
}