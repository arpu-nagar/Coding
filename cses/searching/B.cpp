#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(n), brr(m);
    for(auto &it : arr)
        cin >> it;
    
    for(auto &it : brr)
        cin >> it;

    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    int c = 0;
    int i, j;
    i = j = 0;
    while (i < n && j < m){
    if (arr[i] + k < brr[j]) i++;
    else if (arr[i] - k > brr[j]) j++;
    else { i++; j++; c++; }
    }
    cout << c << endl;
    return 0;
}