/**
     *  Hi, I'm Arpan.
     *  Hardwork beats talent if talents doesn't work hard, friend me if you want to. ✌.|•͡˘‿•͡˘|.✌
     * 
    */

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
#define inv(v)         \
    for (auto &it : v) \
        cin >> it;
#define MOD 1000000007

void solve()
{
    int a, b;
    cin >> a >> b;
    int difference = 0;int sum = 0;
    if (a * 2 <= b || b * 2 <= a)
    {
        if (a < b)
        {
            cout << a << endl;
        }
        else
        {
            cout << b << endl;
        }
    }
    else
    {
        if (a > b)
        {
            difference = a - b;
                                 b = b - difference;
                                             a = a - difference * 2;
        }
        else
        {
            difference = b - a;
                                 a = a - difference;
                                             b = b - difference * 2;
        }
        sum = difference; 
        while (a > 1000000000)
        {
            a = a - 999999999; b = b - 999999999; sum = sum + 666666666;
        }
        while (a > 100000000)
        {
            a = a - 99999999; b = b - 99999999; sum = sum + 66666666;
        }
        while (a > 10000000)
        {
            a = a - 9999999; b = b - 9999999; sum = sum + 6666666;
        }
        while (a > 1000000)
        {
            a = a - 999999; b = b - 999999; sum = sum + 666666;
        }
        while (a > 100000)
        {
            a = a - 99999; b = b - 99999; sum = sum + 66666;
        }
        while (a > 10000)
        {
            a = a - 9999; b = b - 9999; sum = sum + 6666;
        }
        while (a > 1000)
        {
            a = a - 999; b = b - 999; sum = sum + 666;
        }
        while (a > 100)
        {
            a = a - 99; b = b - 99; sum = sum + 66;
        }
        while (a > 1 && b > 1)
        {
            if (a > b)
            {
                a = a - 2; b = b - 1; sum = sum + 1;
            }
            else
            {
                b = b - 2; a = a - 1; sum = sum + 1;
            }
        }
        if (a >= 2 && b == 1)
        {
            sum = sum + 1;
        }
        if (a == 1 && b >= 2)
        {
            sum = sum + 1;
        }
        cout << sum << endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}