#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    char grid[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int arr[n + 1];
    bool vis[n + 1][n + 1];
    memset(vis, false, sizeof vis);
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; i++) {
        int x = 0;
        int d = 0;
        // vector<int> tmp;
        int p = -1;
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '.') {
                d++;
                p = j;
                // tmp.push_back(j);
            }
            else if (grid[i][j] == 'X') {
                x++;
            }
        }
        if (x + d == n) {
            if (d == 1 && vis[i][p] != true) {
                vis[i][p] = true;
                arr[d]++;
            }
            else if (d != 1) arr[d]++;
        }
    }

    for (int i = 0; i < n; i++) {
        int x = 0;
        int d = 0;
        // vector<int> tmp;
        int p = -1;
        for (int j = 0; j < n; j++) {
            if (grid[j][i] == '.') {
                d++;
                // tmp.push_back(j);
                p = j;
            }
            else if (grid[j][i] == 'X') {
                x++;
            }
        }
        if (x + d == n) {
            if (d == 1 && vis[p][i] != true) {
                vis[p][i] = true;
                arr[d]++;
            }
            else if (d != 1) arr[d]++;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (arr[i] != 0) {
            cout << i << " " << arr[i] << endl;
            return;
        }
    }
    cout << "Impossible" << endl;
}

int main() {
    // freopen("input.txt", "r+", stdin);
    // freopen("output.txt", "w+", stdout);
    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case #" << i << ": ";
        solve();
    }
}