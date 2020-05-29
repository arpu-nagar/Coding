#include <bits/stdc++.h>
using ll = long long int;

#define array arr;

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int arr[2];
    for(int i=0;i<s.length();i++){
        arr[s[i] - '0']++;
    }
    int c = arr[1]; int flag = 0;
    for(int i=0;i<s.length();i++){
        
        if(s[i] == '1'){
            c--;
        }
        else
        {
            // if(c==0) break;
            if((c!= arr[1] && c!=0)){
                flag++;
            }
        }
    }
    cout << flag << endl;
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