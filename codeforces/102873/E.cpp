#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t;
    cin >> t;
    ll ans = 0;
    int ok = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == t[0] && s[i + 1] == t[1])
        {
            ans += (i) * (n - i - 2) + 1 +
        }
    }
    cout << ans << endl;
    return 0;
}