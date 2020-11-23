#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "NO" << endl;
        return 0;
    }
    if (n % 10 == 0)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
    return 0;
}