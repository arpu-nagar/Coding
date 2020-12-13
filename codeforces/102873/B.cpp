#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    vector<bool> mark(n, false);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ok = 1;
    mark[0] = 1;
    for (int i = 1; i < n && ok; i++)
    {
        if (a[i] >= a[i - 1])
        {
            mark[i] = 1;
        }
        else
        {
            ok = 0;
        }
    }
    ok = 1;
    mark[n - 1] = 1;
    for (int i = n - 2; i >= 0 && ok; i--)
    {
        if (mark[i])
        {
            ok = 0;
            continue;
        }
        if (a[i] >= a[i + 1])
        {
            mark[i] = 1;
        }
        else
            ok = 0;
    }
    int ans = 0;
    for (auto x : mark)
        ans += x;
    cout << ans << endl;
    return 0;
}