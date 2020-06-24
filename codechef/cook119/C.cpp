
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
vector<int> list[200005];
int dp[200005];
int i;
void BFS(vector<int> a,vector<int> b,vector<bool> &viz,int v){
	queue<int> q;
	viz[v] = true;

	q.push(v);
	while(!q.empty()){
		v = q.front();
		q.pop();
		dp[i++] = dp[i-1]*i + a[i]/b[i];
	}


}

void solve()
{
    int n,m;
    cin >> n >> m;
    vi a(n),b(n);
    inv(a);
    inv(b);
	for(int i=0;i<m;i++){
		int u,v;
		cin >> u >> v;
		list[u].push_back(v);
		list[v].push_back(u);
	}
	i = 0;

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
