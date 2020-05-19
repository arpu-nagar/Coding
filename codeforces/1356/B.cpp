#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    string x;
    cin >> x;
    int ans,a,b,c;
    a=b=c=-1;int max1 = x.length()+1;
    for(int i=0;i<x.length();i++){
        if(x[i] == '1')
        a=i;
        else if(x[i] == '2')
        b=i;
        else if(x[i] == '3')
        c=i;
        if( a!=-1 && b!=-1 && c!=-1){
            int m = max(a,max(b,c));
            int mi = min(a,min(b,c));
            if(max1 > m-mi)
            max1 = m-mi;
        }
    }
    if(max1 == x.length()+1)
    cout << "0" << endl;
    else
    {
        cout << max1+1 << endl;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}