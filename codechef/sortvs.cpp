#include <bits/stdc++.h>
using namespace std;
int minSwaps(vector<int> arr, int n) 
{ 
    pair<int, int> arrPos[n]; 
    for (int i = 0; i < n; i++) 
    { 
        arrPos[i].first = arr[i]; 
        arrPos[i].second = i; 
    } 
    sort(arrPos, arrPos + n); 
    vector<bool> vis(n, false);
    int ans = 0; 
  
    for (int i = 0; i < n; i++) 
    { 
        
        if (vis[i] || arrPos[i].second == i) 
            continue; 

        int cycle_size = 0; 
        int j = i; 
        while (!vis[j]) 
        { 
            vis[j] = 1; 
              j = arrPos[j].second; 
            cycle_size++; 
        } 
  
         
        if (cycle_size > 0) 
        { 
            ans += (cycle_size - 1); 
        } 
    } 
  
    // Return result 
    return ans; 
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int> arr(n);
        for(auto &it: arr)
        cin >> it;
        vector<pair<int,int>> a(m);
        for(int i=0;i<m;i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        cout << minSwaps(arr,n) << endl;
    }
}