#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    int s = 0, mx = 1;

    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        if(mp[x] != 0){
            s = max(mp[x], s);
        }
        mp[x] = i+1;
        mx = max(mx, i+1 - s);
    }
        cout << mx;
}   