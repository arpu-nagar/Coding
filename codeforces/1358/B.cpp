#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &it : arr)
    cin >> it;

    sort(arr.begin(),arr.end());
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] <= (i+1)){
            count = i+1;
        }
    }
    if(count == 0)
    cout << "1" << endl;
    else
    {
        cout << count+1 <<endl; 
    }
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}