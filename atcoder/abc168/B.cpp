#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    cin >> s;
    if(s.length() <= t){
        cout << s << endl;
    }
    else
    {
        for(int i=0;i<t;i++){
            cout << s[i];
        }
        cout << "..."<<endl;
    }
    
    return 0;
}