#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<int> arr(n + 1, n + 1);
        int station[n];
        int t = 0;
        for (int i = 0;i < n;i++) {
            cin >> station[i];
        }
        for (int i = 0;i < n;i++) {
            if (station[i] == 1) {
                arr[i] = t == 0 ? n + 1 : t;
                t = 1;
                continue;
            }
            if (t == 0) continue;
            arr[i] = t;
            t++;
        }
        t = 0;
        for (int i = n - 1;i >= 0;i--) {
            if (station[i] == 2) {
                arr[i] = t == 0 ? arr[i] : min(arr[i], t);
                t = 1;
                continue;
            }
            if (t == 0) continue;
            arr[i] = min(t, arr[i]);
            t++;
        }
        // for (int i = 0;i < n;i++) {
        //     cout << arr[i] << ' ';
        // }
        for (int i = 0;i < m;i++) {
            int a; cin >> a;
            a--;
            if (a == 0 || station[a] != 0) { cout << 0; }
            else if (arr[a] != n + 1)
                cout << arr[a];
            else cout << -1;
            if (i != m - 1) cout << ' ';
        }
        cout << '\n';
    }
}