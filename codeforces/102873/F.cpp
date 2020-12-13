#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 2)
        {
            cout << "Alice" << endl;
            continue;
        }
        if (n % 2)
        {
            cout << "Bob" << endl;
            continue;
        }
        if (n & (n - 1))
        {
            cout << "Alice" << endl;
        }
        else
        {
            if (n % 4)
                cout << "Alice" << endl;
            else
                cout << "Draw" << endl;
        }
    }
    return 0;
}