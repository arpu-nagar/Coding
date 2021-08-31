#include <bits/stdc++.h>
using namespace std;

template<typename T>
void pop_front(std::vector<T>& vec)
{
    assert(!vec.empty());
    vec.front() = std::move(vec.back());
    vec.pop_back();
}


int main() {
    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case #" << i << ": ";
        string s; cin >> s;
        int arr[26] = { 0 };

        for (auto& x : s) arr[x - 'a']++;
        int f = 0;
        for (int j = 0; j < 26 && !f; j++) {
            if (arr[j] > (s.size() / 2)) {
                cout << "IMPOSSIBLE" << endl;
                f = 1;
                break;
            }
        }

        if (!f) {
            string x = s;
            sort(x.begin(), x.end());
            string y = x;
            reverse(x.begin(), x.end());
            map<char, vector<char>> mp;

            for (int j = 0; j < x.size(); j++) {
                if (y[j] != x[j])
                    mp[y[j]].push_back(x[j]);
                else {
                    swap(x[j], x[x.size() - 1]);
                    mp[y[j]].push_back(x[j]);
                }
            }

            for (int j = 0; j < x.size(); j++) {
                cout << mp[s[j]][0];
                mp[s[j]].front() = std::move(mp[s[j]].back());
                mp[s[j]].pop_back();
            }
            cout << endl;
        }
    }
}