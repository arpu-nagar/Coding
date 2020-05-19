#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int arr[200000] = {0};
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
    {
        cin >> it;
    }
    for (int i = 0; i < n; i++)
    {
        arr[a[i] - 1]++;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans + (arr[i] / (i + 1));
        if(arr[i]%(i+1)!=0){
            arr[i+1]+=arr[i]%(i+1);
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}