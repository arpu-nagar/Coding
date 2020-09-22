#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int k;
    cin >> k;
    while (k--)
    {
        int low, high;
        cin >> low >> high;
        int l = -1, r = n;
        int l1, r1;
        l1 = r1 = 1;
        // grrr than high
        while(r-l > 1){
            int mid = (l + r) / 2;
            if(arr[mid] <= high){
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        r1 = r;
        l = -1, r = n;
        // lower than low
        while(r-l > 1){
            int mid = (l + r) / 2;
            if(arr[mid] < low){
                l = mid;
            }
            else
                r = mid;
        }
        l1 = l;
        cout << r1-l1-1<< endl;
    }
    return 0;
}