#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    int s = a + b + c;
    double ans = ((a) * (100 - a) * 1.0) / (s * 1.0) + ((b) * (100 - b) * 1.0) / (s * 1.0) + ((c) * (100 - c) * 1.0) / (s * 1.0);
    cout << setprecision(8) << ans << endl;
    return 0;
}