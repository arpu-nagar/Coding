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
        string s;
        cin >> s;
        int c = 1;
        string ans;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            int p = s[i] - '0' + c;
            if (p == 10)
            {
                c = 1;
                ans = "0" + ans;
            }
            else
            {
                c = 0;
                ans = to_string(p) + ans;
            }
        }
        if (c == 1)
        {
            ans = "1" + ans;
        }
        cout << ans << endl;
    }
    return 0;
}
