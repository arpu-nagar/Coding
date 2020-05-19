#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
void solve()
{
    string s1,s2,x1,x2;
    cin >> x1;
    cin >> x2;
    s1 = (x1.length() > x2.length()) ? x2 : x1;
    s2 = (x1.length() > x2.length()) ? x1 : x2;
    // cout << s1 << endl;
    // cout << s2 << endl;
    int curr = 0; int count = 0;
    for(int i=0;i<s2.length();i++){ 
        // for(int j=curr+1;j<s2.length();j++){
        //     if(s1[i] == s2[j]){
        //         curr = j; 
        //         count++;
        //         break;
        //     }
        if(count < s1.length())
        {
            if(s2[i] == s1[count])
            {
                count++;
            }
        }
    }



        if(count == s1.length()){
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
