#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int q;
    cin >> q;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;

    int m;
    cin >> m;
    vector<int> brr(m);
    for (auto &it : brr)
        cin >> it;
    
    int i,j;i=j=0;
    int ok = 0; int count=0;int p = 0;
    while(ok !=1){
        if(arr[i] > brr[i]){
            arr.push_back(brr[i]);
            arr.push_back(arr[i]);
            i++;
            count++;
        }
        else if(brr[i] > arr[i]){
            brr.push_back(arr[i]);
            brr.push_back(brr[i]);
            i++;
            count++;
        }
        
        if(i == arr.size()){
            ok = 1;
            p=2;
        }
        else if(i ==  brr.size())
        {
            ok = 1;
            p=1;
        }
        if(count > 100000)
        {
            ok=1;
        }
    }
    if(count == 100001)
    cout << "-1" << endl;
    else
    {
        cout << count << " "<< p << endl;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    // {
        solve();
    
    return 0;
}