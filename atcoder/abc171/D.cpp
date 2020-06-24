/**
 *  Hi, I'm Arpan.
 *  Hardwork beats talent if talents doesn't work hard.
 *
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
#define inv(v)         \
    for (auto &it : v) \
        cin >> it;
#define MOD 1000000007
#define pb push_back

ll power(ll x, ll y)
{
    ll temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
        return x*temp*temp;
}

void solve()
{
    int n,q;
    cin >> n;
    vl a(n);
    inv(a);
    int arr[100005] = {0};
    for(int i=0;i<n;i++){
		arr[a[i]]++;
    }
    ll sum = 0 ;
    for(int i=0;i<n;i++){
		sum+=a[i];
    }

    cin >> q;
    while(q--){
        int b,c;
        cin >> b >> c;
        sum=1ll*sum-1ll*b*arr[b]+1ll*c*arr[b];
        arr[c]+=arr[b];
        arr[b] = 0;
        cout << sum << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
		solve();
    return 0;
}
