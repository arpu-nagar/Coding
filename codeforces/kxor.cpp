#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;
    string x;
    cin >> x;
    string a,b;
    int c = 0;
    for(int i=0;i<n;i++){
        if(x[i] == '2'){
            if(c==0)
            {a+='1';
            b+='1';}
            else
            {
                a+='0';
                b+='2';
            }
            
        }
        else if(x[i] == '1'){
            if(c==0){
                c++;
                a+='1';
                b+='0';
            }
            else
            {
                b+='1';
                a+='0';
            }
            
        }
        else{
            a += '0';
            b += '0';
        }
    }
    cout << a << "\n";
    cout << b << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}