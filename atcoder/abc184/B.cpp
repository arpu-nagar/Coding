#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'x')
            x--;
        else
            x++;
        if (x < 0)
            x = 0;
    }
    if (x < 0)
        x = 0;
    cout << x << endl;

    return 0;
}