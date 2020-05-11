#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    string x;
    cin >> x;
    int arr[26] = {0};
    for (int i = 0; i < n; i++)
    {
        arr[(int)x[i] - 97]++;
    }

    for (int i = 0; i < q; i++)
    {
        long long int sum = 0;
        int c ;
        cin >> c;
       
        for (int j = 0; j < 26; j++)
        {
            if (arr[j] - c > 0)
                sum = sum + (arr[j] - c);
        }
        cout << sum << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}