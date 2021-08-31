
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
	// C-C
    // C-J
    // J-C
    // J-J
    int m,n;
    cin >>  m >> n;
    string s; cin >> s;
    int len = s.length();
    int total = 0;
    int l = -1 , r = len+1;
    for(int i = 0;i<len;i++){
        if(s[i] != '?'){
            if(l == -1) l = i;
            r = i;
        }
    }
    if(l == -1 || l == r){
        cout << 0 << '\n';
        return;
    }
    int f,b;
    if(s[l] == 'C')f = 1;
    else f = 0;
    for(int i = l+1; i <= r;i++){
        if(s[i] == '?'){
            continue;
        }
        else if(s[i] == 'C'){
            if(f == 0) total+=n;
            f = 1;
        }
        else if(s[i] == 'J'){
            if(f == 1) total+=m;
            f = 0;
        }
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