#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
long long int power1(int x, int y, int p)
{
    long long int res = 1;

    x = x % p;
    if (x == 0)
        return 0;

    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;

        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int mod = 1000000000 + 7;
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;
        long long int sum = 0;
        int dp[n + 1] = {0};
        dp[0] = 0; dp[1] = 1;
        sum = a%mod;
        for (int i = 2; i <= n; i++)
        {
            dp[i] = dp[i-1] + 1;
            dp[i] += ((2 * n - 1) * dp[i]);
            sum += power1(a, (dp[i] * (2 * n - 1)) + dp[i-1], mod);
            cout << dp[i-1] << endl;
        }
        sum = sum % mod;
        cout << sum << "\n";
    }

    return 0;
}
