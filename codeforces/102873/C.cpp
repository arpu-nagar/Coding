#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    ll s = 0;
    for (auto &x : a)
        s += x;
    map<int, int> mp;
    for (auto &x : a)
        mp[x]++;
    ll p = s / n;
    ll q = s / n + 1;
    ll r = s / n - 1;

    ll s1, s2, s3;
    s3 = s1 = s2 = 0;
    for (auto &x : a)
    {
        s1 += abs(x - p);
        s2 += abs(x - q);
        s3 += abs(x - r);
    }
    cout << min(s2, min(s1, s3)) << endl;
    return 0;
}