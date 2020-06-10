#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define pb push_back;
#define N 2e5;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                ans++;
                i++;
            }
        }
        cout << ans << endl;
    }
}