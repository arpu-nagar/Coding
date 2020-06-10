#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1;
        cin >> s2;

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s2[i] == 'N')
            {
                continue;
            }
            else if (s2[i] != s1[i])
            {
                i++;
                continue;
            }
            else if (s2[i] == s1[i])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}
