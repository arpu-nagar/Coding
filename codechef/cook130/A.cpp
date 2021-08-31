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
typedef priority_queue<ll, vector<ll>, greater<ll>> minheap;
typedef priority_queue<ll> maxheap;
#define sortv(v) sort(v.begin(),v.end())
#define rsortv(v) sort(v.begin(),v.end(), greater<>());

ll modPower(ll num, ll r) {
    if (r == 0) return 1;
    if (r == 1) return num % MOD;
    ll ans = modPower(num, r / 2) % MOD;
    if (r % 2 == 0) {
        return (ans * ans) % MOD;
    } return (((ans * ans) % MOD) * num) % MOD;
}

ll nCr(ll n, ll r) {
    ll res = 1;
    if (r > n - r) {
        r = n - r;
    }
    for (int i = 0;i < r;i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

/*******************************************/


void solve()
{
    int n, q; cin >> n >> q;
    vi a(n);
    inv(a);
    set<int> s;
    for (auto x : a) s.insert(x);
    sortv(a);
    while (q--) {
        int x; cin >> x;
        if (s.find(x) != s.end()) {
            cout << 0 << endl;
            continue;
        }
        auto pos = lower_bound(a.begin(), a.end(), x);
        int more = pos - a.begin();
        int less = a.end() - pos;
        if (more % 2) {
            cout << "NEGETIVE" << endl;
        }
        else cout << "POSITIVE" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;

    while (t--)
        solve();
    return 0;
}
