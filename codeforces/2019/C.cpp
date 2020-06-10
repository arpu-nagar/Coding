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
        vector<int> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        ll ans = 0;
        ll sum = 0;
        for (auto &i : a)
        {
            ans ^= i;
            sum += i;
        }
        if (sum == 2 * ans)
        {
            cout << "0\n\n";
        }
        else
        {
            cout << "2\n";
            cout << abs(2 * ans) / 2 << " " << abs(sum - ans) / 2 << endl;
        }
    }
}