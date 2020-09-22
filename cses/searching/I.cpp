#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    int n;
    cin >> n;
    ll arr[n];
    ll s = 0;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
        s += arr[i];
    }
    long double p = (s*1.0)/n*1.0;
    ll x = floor(p);
    ll y = x + 1;
    ll ans = 0,ans1 = 0;
    for (int i = 0; i < n;i++){
        ans += abs(x - arr[i]);
        ans1 += abs(y - arr[i]);
    }
    cout << min(ans,ans1);
}
