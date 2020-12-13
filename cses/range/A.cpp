#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0;i < n;i++) cin >> arr[i];
    vector<ll> pref(n + 1, 0);
    for (int i = 1;i <= n;i++) {
        pref[i] += pref[i - 1] + arr[i - 1];
    }
    while (q--) {
        int a, b; cin >> a >> b;
        cout << pref[b] - pref[a - 1] << '\n';
    }
}