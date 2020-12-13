#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    set<int> s;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    if (s.size() != n - 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}