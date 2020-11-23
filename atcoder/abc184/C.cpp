#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int r, c;
    cin >> r >> c;
    if (a == r && c == b)
    {
        return 0;
    }
    if (abs(a - r) <= 3 && abs(b - c) <= 3)
    {
        cout << max(abs(a - r), abs(b - c));
        return 0;
    }
    return 0;
}