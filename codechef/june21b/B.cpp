#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        ll D, d, P, Q;
        cin >> D >> d >> P >> Q;
        ll times = D / d;
        int rem = D % d;
        ll ans = (times * (2 * P + (times - 1) * Q) * d) / 2;
        ans += (rem * (P + Q * times));
        cout << ans << '\n';
    }
}