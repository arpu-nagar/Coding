// author: ozildebeste

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
#define inv(v)       \
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
#define sortv(v) sort(v.begin(), v.end())
#define db(x) cout << (#x) << " is " << (x) << endl;
#define rsortv(v) sort(v.begin(), v.end(), greater<>());

ll nCr(ll n, ll r)
{
    ll res = 1;
    if (r > n - r)
    {
        r = n - r;
    }
    for (int i = 0; i < r; i++)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

ll fact(int n) {
    ll p = 1;
    for (int i = 1; i <= n; i++)
        p *= i * 1ll;
    return p;
}

void solve() {
    int n; cin >> n;
    vi a(n);
    vi b(n);
    vi c(n);
    inv(a);
    inv(b);
    inv(c);
    map<int, int> mpc;
    for (int i = 0; i < n;i++) mpc[c[i]]++;
    vector<vi> mpb;
    vi lol(n + 1, 0);
    mpb.resize(n + 1);
    for (int i = 0;i < n;i++) {
        mpb[b[i]].pb(i + 1);
        lol[b[i]] += mpc[i + 1];
    }
    ll ans = 0;
    for (int i = 0;i < n;i++) {
        if (mpb[a[i]].size() != 0) {
            auto arr = mpb[a[i]];
            ans += lol[a[i]];
        }
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    //   cin >> t;
    while (t--)
        solve();
    return 0;
}