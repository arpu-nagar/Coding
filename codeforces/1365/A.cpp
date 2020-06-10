#include <bits/stdc++.h>
using ll = long long int;
#define pii pair<int, int>;
#define piii pair<int, pii>;
#define vi vector<int>;
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n] = {0}, brr[m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                brr[j] = 1;
                arr[i] = 1;
            }
        }
    }
    int c = 0, c1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            c++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (brr[i] == 0)
        {
            c1++;
        }
    }
    int x = min(c1, c);
    if (x % 2 == 0)
    {
        cout << "Vivek" << endl;
    }
    else
    {
        cout << "Ashish" << endl;
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
