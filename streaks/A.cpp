#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
void solve()
{
    int t,z;
    cin >> t >> z;
    int arr[26] = {0};
    string s;
    cin >> s;
    for(int i=0;i<t;i++){
        arr[s[i]-97]++;
    }
    int sum = 0; int ans = 1;
    for(int i=0;i<26;i++){
        sum = sum + arr[i];
        if(arr[i] > t/2){
            ans = 0;
        }
    }
    if(ans == 0){
        cout << "N" << endl;
    }
    else
    {
        cout << "Y" << endl;
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
