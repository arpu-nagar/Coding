#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int p[601];
        memset(p, 0, sizeof(p));
        for (int i = 2; i <= 600; i++)
        {
            for (int j = i * i; j <= 600; j += i)
            {
                p[j] = 1;
            }
        }
        int c = 0;
        for (int i = 2; i <= 4 * a; i++)
        {
            if (p[i] == 0)
            {
                cout << i * 2 << ' ';
                c++;
            }
            if (c == a)
                break;
        }

        cout << endl;
    }
    return 0;
}