
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
	int n; cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++) cin >> arr[i];
    int total = 0;
    for(int i = 1; i <= n-1; i++){
        int c = 0;
        for(int j = 0;j<n;j++) if(arr[j] == i) c = j;
        // rev [i-1..c]
        for(int j = 0;j < (c-i+1)/2 ;j++){
            swap(arr[i-1+j], arr[c-j]);
        }
        // cout << i -1 << " " << c << endl;
        total+=c-i+2;
    }
    cout << total << '\n';
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