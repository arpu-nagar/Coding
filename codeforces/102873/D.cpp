#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, s;
    cin >> a >> s;
    ll r = s - a;
    int mp[10], mp1[10];
    memset(mp, 0, sizeof(mp));
    memset(mp1, 0, sizeof(mp1));
    while (a)
    {
        int q = a % 10;
        mp[q]++;
        a /= 10;
    }
    while (r)
    {
        int q = r % 10;
        mp1[q]++;
        r /= 10;
    }
    int ok = 0;
    for (int i = 0; i < 10; i++)
    {
        if (mp[i] != mp1[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}