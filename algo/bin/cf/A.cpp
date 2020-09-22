#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(auto &x: arr)
        cin >> x;
    
    sort(arr.begin(), arr.end());
    while(k--){
        int p;
        cin >> p;
        int l = 0, r = n - 1;
        while(l <= r){
            int mid = l + r;
            mid /= 2;
            if(arr[mid] == p){
                cout << "YES" << endl;
                break;
            }

            if(arr[mid] > p)
                r = mid - 1;
            if(arr[mid] < p)
                l = mid + 1;

        }
        if(l > r){
            cout << "NO" << endl;
        }
    }
    return 0;
}