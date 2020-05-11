#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(){
    int a,b,c,d;
    cin >> a >> b;
    cin >> c >> d;
    int ans = 1;
    if(a == c){
        if(b+d != a){
            ans = 0;
        }
    }
    if(a == d){
        if(b+c != a){
            ans = 0;
        }
    }

    if(b == c){
        if(a+d != b){
            ans = 0;
        }
    }
    if(b == d){
        if(a+c != b){
            ans = 0;
        }
    }
    if(a == 0)
    cout << "No" << endl;
    else
    {
        cout << "Yes" << endl;
    }
    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}