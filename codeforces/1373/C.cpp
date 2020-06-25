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
    string s;
    cin >> s;
    ll ans = 0;
    int n = s.length();
    int temp = 0;int x = 0;
    for(int i = 0;i<n;i++){
		if(s[i] == '+'){
			temp++;
		}
		else if(s[i] == '-'){
			temp--;
		}
			if(temp < 0){
					temp++;
				ans+=(i+1);
			}
    }
    ans+=n;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
