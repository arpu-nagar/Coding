#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &it : vec)
    {
        cin >> it;
    }
    sort(vec.begin(),vec.end());
    int ans = 0; int curr = 0;
    for (int i = 1; i < n; i++)
    {
        if(curr == 0){
            
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while (t--)
    solve();

    return 0;
}