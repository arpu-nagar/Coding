#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main(){
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        arr[i].first = x, arr[i].second = i + 1;
    }
    sort(arr.begin(), arr.end());
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (arr[l].first + arr[r].first == k){
            cout << arr[l].second << " " << arr[r].second;
            return 0;
        }

        if (arr[l].first + arr[r].first > k)
            r--;
            else
                l++;
    }
    cout << "IMPOSSIBLE";
}