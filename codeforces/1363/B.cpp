#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define N 2e5

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char a,b;
        b = '9';
        int c1,c2;
        c1=c2=0;int temp = -1;
        a = s[0];int x = -1;
        for(int i=1;i<s.length();i++){
            if(s[i] != a && b == '9'){
                temp = i;
                b = s[i];
            }
            if(s[i] != a){
                x = i;
            }
        }
        // cout << x << " " << temp;
        for (int i = 0; i < s.length(); i++)
        {
            if(i <x && s[i] == a){
                c1++;
            }

            if(i > temp && s[i] == a){
                c2++;
            }
        }
        
        cout << min(c1,c2) << "\n";
    }
}