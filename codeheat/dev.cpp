#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, q;
    cin >> n >> q;
    int arr[n] = {0};
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int p;
        cin >> p;
        arr[p - 1]++;
    }
    int ans = 0;
    int curr = 0;
    int val = 0;
    for (int i = q-1; i < n; i++)
    { int flag = 0;
        for(int j=i; j >= i-q+1;j--){
            if(arr[j] == 1){
                flag = 1;
            }
        }
        if(flag == 0){
            arr[i] = 1;
        }
    }
    for(int i=0;i<n;i++){
        ans+=arr[i];
    }
    cout << ans << endl;

    return 0;
}