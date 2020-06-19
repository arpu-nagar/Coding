/**
 *  Hi, I'm Arpan.
 *  Hardwork beats talent if talents doesn't work hard, friend me if you want to. ✌.|•͡˘‿•͡˘|.✌
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

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    inv(a);
    int o,e;
    o=e=0;

    for(int i=0;i<n;i++){
		if(a[i]%2 == 0) e++;
		else o++;
    }
    if(n%2 == 0){
		if(o != e){
			cout << "-1\n";
		}
		else
		{
			int ans = 0;
			for(int i=0;i<n;i++){
				if(i%2 == 0 && a[i]%2 != 0){
					ans++;
				}
			}
			cout << ans << endl;
		}
    }
    else{
		if(e-o != 1){
			cout << "-1\n";
		}
		else{
			int ans = 0;
			for(int i=0;i<n;i++){
				if(i%2 == 0 && a[i]%2 != 0){
					ans++;
				}
			}
			cout << ans << endl;
		}
    }
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
