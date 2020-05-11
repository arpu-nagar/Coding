#include <bits/stdc++.h>

using namespace std;


void solve(){
    string t;
    cin >> t;
    int n = t.size();
    if(n == 1 || n == 2) cout << t << endl;
    else {
        bool ok = true;
        for(int i = 0; i < n && ok; ++i){
            ok &= (t[i] == t[0]);
        }
        if(ok){
            cout << t << endl;
            return;
        }
        string s = "";
        s += t[0];
        for(int i = 1; i < 2*n; ++i){
            s += ((s[i-1] - '0') ^ 1) + '0';
        }
        cout << s << endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {solve();}
    return 0;
}
