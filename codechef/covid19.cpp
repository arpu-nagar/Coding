#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for(auto &it : a )
    cin >> it;
    b[0] = 1;
    int min = n; int max = -1;
    for(int i=1;i<n;i++){
        if(a[i] - a[i-1] <= 2){
            b[i] = b[i-1]+1;
        }
        else
        {
            b[i] = 1;
        }
        if(max < b[i])
        max = b[i];
    }

    for(int i=0;i<n-1;i++)
    {
        if(b[i+1] == 1)
        {
            if(b[i] < min)
            min = b[i];
        }
    }
    if(b[n-1] < min)
    {
        min = b[n-1];
    }
    cout << min << " " << max << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}