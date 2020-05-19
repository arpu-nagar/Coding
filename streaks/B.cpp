#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
void solve()
{
    int p,q;
    cin >> p >> q;
    int sum = 0;
    int arr[p][q];
    for(int i=0;i<p;i++){
        string x;
        cin >> x;
        for(int j=0;j<x.length();j++){
            arr[i][j] = (int)x[j] -48;
        }
    }
    for(int i=0;i<p;i++){
        int ans = 0;
        for(int j=0;j<q;j++){
            int curr = 1;
            for(int k=0;k<p;k++){
                if(arr[k][j] > arr[i][j])
                curr = 0;
            }
            if(curr == 1)
            ans = curr;
        }
        if(ans == 1){
            sum+=1;
        }
    }
    cout << sum << endl;
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
        solve();

    return 0;
}
