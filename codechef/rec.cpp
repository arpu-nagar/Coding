#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    int a[1000] = {0};
    int cur = arr[0];
    a[cur - 1] = 1;
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == cur)
        {
            a[arr[i] - 1]++;
            continue;
        }
        else
        {
            if (a[arr[i] - 1] >= 1)
            {
                ans = 0;
                break;
            }
            cur = arr[i];
            a[cur - 1] = 1;
        }
    }
    int brr[1000] = {0};
    for(int i=0;i<1000;i++){
        if(brr[a[i]-1] > 0)
        {
            ans = 0;
        } 
        else
        {
            brr[a[i]-1] =1;
        }
        
    }
    if (ans == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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