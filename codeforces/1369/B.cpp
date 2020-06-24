#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
#define inv(v)         \
    for (auto &it : v) \
        cin >> it;
#define MOD 1000000007

void solve()
{
    int n;
    cin >> n;
    string x;
    cin >> x;
    if(n == 1){
        cout << x << endl;
        return;
    }
    int p1 = -1;
    int p2 = -1;
    for(int i=0;i<n-1 && p1 == -1;i++){
        if(x[i] == '1' && x[i+1] == '0'){
            p1 = i+1;
        }
    }
    for(int i = n-1;i>0 && p2 == -1;i--){
        if(x[i] == '0'){
            p2 = i;
        }
    }

    if(p1 == -1){
        cout << x << endl;
    }
    else{
        if(p1 == p2){
            for(int i=0;i<n;i++){
                if(i < p1){
                    if(x[i] == '0')
                        cout << "0";
                }
                if(i == p2) cout << "0";
                if(i > p2 && x[i] == '1'){
                    cout << x[i];
                }
            }
            cout << endl;
            return;
        }
        else{
            for(int i=0;i<n;i++){
                if(i < p1){
                    if(x[i] == '0')
                        cout << "0";
                }
                if(i==p2) cout << "0";
                if(i > p2 && p2 != -1){
                    cout << x[i];
                }
            }
            cout << endl;
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
