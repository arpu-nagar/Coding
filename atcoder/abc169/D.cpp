#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define N 2e5

int main()
{
    ll n;
    cin >> n;
    ll t = n;
    ll ans = 0;
    vector<int> v;
    for(int i= 2;i<= sqrt(n);i++){
        if(n%i == 0 && t%i==0){
            ans++;
            t=t/i;
            v.push_back(t);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(t%v[i] == 0 && n%v[i]==0 && t>1) 
        {ans++;
        t=t/v[i];
        }
    }
    // cout << ans << endl;

    if(ans == 0 && n !=1)
    cout << "1";
    else
    {
       cout << ans;
    }
}