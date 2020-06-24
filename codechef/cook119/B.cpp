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
    int n,m;
    cin >> n >> m;
    vi a(n);
    inv(a);
    int cb,ca;
    cb=ca=0;
	set<int> s,s1;
    for(int i=0;i<n;i++){

		if(a[i] < m) {
			if(s.find(a[i]) == s.end()){
				s.insert(a[i]);
			}
			cb++;
		}
		else if(a[i] > m)
		{
			if(s1.find(a[i]) == s1.end()){
				s1.insert(a[i]);
			}
			ca++;
		}
    }

    if(s.size() == m-1){
		cout << cb + ca << endl;
    }
    else{
		cout <<"-1\n";
    }
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
