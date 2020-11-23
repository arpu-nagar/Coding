#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int n = s.size();
    char ans[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ans[a] = s[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
    }
    cout << endl;
    return 0;
}