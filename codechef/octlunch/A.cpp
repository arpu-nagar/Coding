// author: arpunagar

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &it : a)
            cin >> it;
        ll ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int v = a[i] ^ a[j];
                if (v > max(a[i], a[j]))
                    ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
