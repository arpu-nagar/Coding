#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int main(){

    ios::sync_with_stdio(0); 
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        LL x, y, a, b;
        cin >> x >> y >> a >> b;
        LL mn = min(x, y);
        LL mx = max(x, y);
        cout << min(mn * b + (mx - mn) * a, (x + y) *a) << endl;
    }
    return 0;
