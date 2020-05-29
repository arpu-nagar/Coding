#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &it : v){
        cin >> it;
    }
    sort(v.begin(),v.end());
    int dif = 1000000;
    for(int i=0;i<n-1;i++){
        if(v[i+1]-v[i] < dif)
            dif = v[i + 1] - v[i];
    }
    cout << dif << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
