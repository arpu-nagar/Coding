#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    while (k--)
    {
        int p;
        cin >> p;
        int l = -1, r = n;
        while(r-l > 1){
            int mid = l + r;
            mid /= 2;
            if(arr[mid] <= p)
                l = mid;
            else
                r = mid;
        }
        cout << r + 1 << "\n";
    }
    return 0;
}