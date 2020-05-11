#include <bits/stdc++.h>
using namespace std;
#define ll long long int;

void solve(){
    int n,s;
    cin >> n >> s;
    vector<int> a(n);
    for(auto &it: a)
    cin >> it;
    vector<int> b(n);
    for(auto &it: b)
    cin >> it;
    int max_1 = 10000,max_0=10000;

    for(int i=0;i<n;i++)
    {
        if(b[i] == 1)
        {
            if(a[i] < max_1)
            max_1 = a[i];
        }

        if(b[i] == 0)
        {
            if(a[i] < max_0)
            max_0 = a[i];
        }
    }

    if(max_0 + max_1 <= (100-s))
    cout << "yes" << endl;
    else
    {
        cout << "no" << endl;
    }
    


}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}