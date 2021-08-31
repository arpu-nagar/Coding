#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

void solve() {
    string s; cin >> s;
    int n = s.size();

    string vowels = "AEIOU";

    int mn = int(1e9);
    for (auto x : vowels) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != x && isVowel(s[i])) {
                cnt += 2;
            }
            else if (!isVowel(s[i])) {
                cnt++;
            }
        }
        mn = min(mn, cnt);
    }

    for (int i = 0; i < 26; i++) {
        char c = 'A' + i;
        if (isVowel(c)) continue;

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (isVowel(s[i])) {
                cnt++;
            }
            else if (!isVowel(s[i]) && s[i] != c) {
                cnt += 2;
            }
        }
        mn = min(mn, cnt);
    }
    cout << mn << '\n';
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