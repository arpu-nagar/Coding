#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    ll o, t, z;
    o = t = z = 0;
    for (auto x : arr)
    {
        if (x == 0)
            z++;
        if (x == 1)
            o++;
        if (x == 2)
            t++;
    }
    int p = o + t;
    cout << (z * (z - 1)) / 2 + (o * (o - 1)) / 2 + (t * (t - 1)) / 2 + o * t << endl;
    return 0;
}