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
        int n, q;
        cin >> n >> q;
        int s, d;
        long long int sum = 0;
        for (int i = 0; i < q; i++)
        {
            if (i == 0)
            {
                cin >> s >> d;
                sum = s;
                sum += abs(s - d);
                continue;
            }
            int temp = d;
            cin >> s >> d;
            sum += abs(temp - s);
            sum += abs(s-d);
        }

        cout << sum << "\n";
    }
    return 0;
}