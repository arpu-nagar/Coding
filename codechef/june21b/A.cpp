#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int x, y, X, Y;
        cin >> x >> y >> X >> Y;
        cout << X / x + Y / y << '\n';
    }
}