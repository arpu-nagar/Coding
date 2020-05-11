#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int MOD = 1000000000 + 7;
    string s;
    cin >> s;
    int l = s.length();
    long long int res = 0;
    long long int f = 1;
    for (int i = l - 1; i >= 0; i--)
    {
        res = (res + (s[i] - '0') * f * (i + 1)) % MOD;
        f = (f * 10 + 1) % MOD;
    }
    cout << f << endl;
}
