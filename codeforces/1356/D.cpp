#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    int n,q;
    cin >> n >> q;
    int arr[n] = {0}; int max1 = 0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        max1 = max(arr[i],max1);
    }
    int a[max1] = {0};
    for (int i = 0; i < n; i++)
    {
        a[arr[i]-1]++;
    }
    for(int i=0;i<q;i++){
        int k;
        cin >> k;
        if(k > 0){
            a[k-1]++;
        }
        else
        {
            int sum = 0;
            for(int j=0;j<max1;j++){
                sum += a[i];
                if(sum < abs(k)){
                    continue;
                }
                else{
                    arr[i]--;
                    break;
                }
            }
        }
    }
    int flag = 0;
    for(int i=0;i<max1;i++){
        int lol = 0;
        if(a[i] > 0)
        {
            flag = 1;
            lol = 1;
            cout << i+1 << endl;
            break;
        }
        if(lol == 1)
        break;
    }
    if(flag == 0)
    cout << "0" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}