
// author: arpunagar

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
#define popb pop_back()
#define endl "\n"
#define fi first
#define se second
#define ar array
typedef priority_queue<ll, vector<ll>, greater<ll>> minheap;
typedef priority_queue<ll> maxheap;
#define sortv(v) sort(v.begin(),v.end())
#define db(x) cout << (#x) << " is " << (x) << endl;
#define rsortv(v) sort(v.begin(),v.end(), greater<>());

ll nCr(ll n, ll r) {
    ll res = 1;
    if (r > n - r) {
        r = n - r;
    }
    for(int i=0;i<r;i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

void solve(){
	int n,c; cin >> n >> c;
    if(c < n-1 || c > (n*(n+1))/2){
        cout << "IMPOSSIBLE\n";
        return;
    }
    vector<int> counts;
    int tot = n-1;
    int count  = -1;
    for(int i = 0;i<n-1;i++){
        count = min(n-i,c-(tot-1));
        if(count == 1) break;
        counts.push_back(count);
        tot+= count - 1;
    }
    vector<int> ans;
    for(int i = 0;i<n;i++) ans.push_back(i+1);
    // reverse(ans.begin(),ans.end());
    for(auto x : counts){
        // reverse till x and add remaining
        vector<int> temp = ans;
        int flag = 0;
        for(int i = 0;i <n ; i++){
            if(ans[i] == x){
                reverse(temp.begin(),temp.begin()+i+1);
                flag = 1;
                ans.insert(ans.end(),temp.begin(),temp.end());
                break;
            }
        }
        ans = temp;
    }
    for(auto &x : ans) cout << x << ' ';
    cout << '\n';
}

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int tt; cin >> tt;
        for(int i = 1;i<=tt;i++){
            cout << "Case #" << i << ": ";
            solve();
        }
            // solve();
        return 0;
}