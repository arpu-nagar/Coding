#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int MX = 2e5 + 2;
void solve() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> table(MX, vector<int>(40, -1));
    for (int i = 0; i < n; i++) {
        cin >> table[i][0];
    }
    int k = log2(n);
    for (int j = 1; j <= k; j++) {
        for (int i = 0; i + (1 << j) <= n;i++) {
            table[i][j] = min(table[i][j - 1], table[i + (1 << (j - 1))][j - 1]);
        }
    }

    while (q--) {
        int l, r; cin >> l >> r;
        l--, r--;
        int p = log2(r - l + 1);
        cout << min(table[l][p], table[r - (1 << p) + 1][p]) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}