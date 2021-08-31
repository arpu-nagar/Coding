#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n, l; cin >> n >> l;
        vector<int> arr(n);
        vector<pair<int, double>> a;
        vector<pair<int, double>> b;
        for (auto& x : arr) cin >> x;

        int dist = 0;
        int s = 2;
        pair<int, int> p;
        p.first = arr[0];
        p.second = arr[0];
        a.push_back(p);
        for (int i = 1; i < n; i++) {
            pair<int, int> p;
            p.first = arr[i];
            p.second = (arr[i] * 1.0) / s;
            s++;
            a.push_back(p);
        }

        p.first = l - arr[n - 1];
        p.second = l - arr[n - 1];
        s = 2;
        b.push_back(p);
        for (int i = n - 2; i >= 0; i--) {
            pair<int, int> p;
            p.first = l - arr[i];
            p.second = ((l - arr[i]) * 1.0) / s;
            s++;
            b.push_back(p);
        }

        for (int i = 0; i < n; i++) {
            cout << a[i].first << ' ' << a[i].second << ' ' << b[i].first << ' ' << b[i].second << '\n';
            if (a[i].first + b[i].first >= l) {
                double ans = ((b[i].first + a[i].first) * 1.0) / (b[i].second + a[i].second);
                cout << ans << endl;
                break;
            }
        }
    }
    return 0;
}