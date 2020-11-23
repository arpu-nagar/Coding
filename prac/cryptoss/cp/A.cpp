#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 0;
    int ex = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            c++;
        }
        else
        {
            if (c == 0)
            {
                ex++;
            }
            else
            {
                c--;
            }
        }
    }
    cout << c + ex << endl;
    return 0;
}