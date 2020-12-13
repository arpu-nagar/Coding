#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    for (int i = 1;i <= t;i++) {
        cout << "Case #" << i << ": ";
        long long n; cin >> n;
        long long x = n;
        int c = 0;
        while (x) {
            x /= 10;
            c++;
        }
        int ok = 0;
        while (n && !ok) {
            int r = n % 10;
            if (r % 2) {
                long long u = pow(c - 1, 10) * r;
                long long l = pow(c - 1, 10) * (r - 1);
                cout << min(u - n, n - l) << endl;
                ok = 1;
                continue;
            }
            n /= 10;
        }
        if (!ok) cout << 0 << endl;
    }
}