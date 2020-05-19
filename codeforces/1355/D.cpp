#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n, s;
    cin >> n >> s;
    vector<int> arr(n);
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = 1;
    }
    arr[n - 1] = s - (n - 1);
    if (arr[n - 1] > n)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << arr[n - 1] - 1 << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}