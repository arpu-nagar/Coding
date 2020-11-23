// author: arpunagar

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &it : a)
            cin >> it;
        int p = *min_element(a.begin(), a.end());
        cout << (n + 1) / p << endl;
    }
    return 0;
}
