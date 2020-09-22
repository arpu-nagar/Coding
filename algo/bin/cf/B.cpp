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
        auto x = upper_bound(arr.begin(),arr.end(),p);
        if(*x == p)
            cout << (x - arr.begin()) + 1 << endl;
        else
        cout << x - arr.begin() << endl;
    }
    return 0;
}