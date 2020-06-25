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
    ll a,b,c;
    cin >> a >> b >> c;
    if(a < c){

		if(a*b <= c){
			cout << "1 -1\n";
		}
		else{
			cout << 1 << " " << b << endl;
		}
    }
    else if(c == a){
		cout <<"-1 " << b << endl;
    }
    else if(c < a){
		cout <<"-1 " << "1" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
