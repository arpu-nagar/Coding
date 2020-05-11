#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long int;
void solve()
{
    ll x, y, l, r;
    cin >> x >> y >> l >> r;
    // ll arr[64] = {0};
    // ll brr[64] = {0};
    // int p1, p2;
    // p1 = p2 = 0;
    // while (x != 0)
    // {
    //     ll r = x % 2;
    //     arr[p1] = r;
    //     p1++;
    //     x /= 2;
    // }
    // while (y != 0)
    // {
    //     ll r = y % 2;
    //     brr[p2] = r;
    //     p2++;
    //     y /= 2;
    // }

    // ll z = 0;
    // int i = max(p1, p2);
    if(x == 0 || y == 0 || r == 0){
        cout << l << "\n";
        return;
    }
    ll curr = x | y;
    while(curr < l || curr > r){
        if(curr > r){
            if(curr &(~r) >= l && curr &(~r)<=r)
            {
                curr&=~r;
                break;
            }
            else if(curr&(~r) < r)
            curr&=~r;
            else
            {
                ll pos = (ll)(log(curr-r)/log(2)) + 1;
                ll temp = curr >> pos;
                temp = 1<<  (ll) ((ll)log((temp&(~temp))/log(2))+pos);
                curr = curr&(~temp);
            }   
        }
        else
        {
            curr = curr | l;
        } 
    }

    cout << curr << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
