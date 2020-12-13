#include <bits/stdc++.h>
using namespace std;
int main() {
    int ans = 0;
    for (int i = 0;i < 1000;i++) {
        int l, r; char ch;
        cin >> l >> ch >> r;
        char t, c;
        cin >> t >> c;
        string s; cin >> s;
        if (s[l - 1] == t && s[r - 1] != t) {
            ans++;
            continue;
        } else if (s[l - 1] != t && s[r - 1] == t) ans++;
    }
    cout << ans << endl;
}