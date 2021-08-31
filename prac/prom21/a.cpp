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

template<typename T>
inline std::ostream& operator << (std::ostream& os, const std::vector<T>& v)
{
    bool first = true;
    for (unsigned int i = 0; i < v.size(); i++)
    {
        if (!first)
            os << " ";
        os << v[i];
        first = false;
    }
    return os;
}

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
    int n, m; cin >> n >> m;
    vi a(n);
    vi b(m);
    inv(a);
    inv(b);

    int mn = -2 * int(1e9) - 1000;
    int station = 0;
    for (int i = 0;i < n;i++) {
        if (station < m - 1) {
            int cur = abs(a[i] - b[station]);
            int next = abs(a[i] - b[station + 1]);
            if (next <= cur) {
                station++;
                mn = max(mn, next);
            }
            else {
                mn = max(mn, cur);
            }

        }
        else {
            int cur = abs(a[i] - b[station]);
            mn = max(mn, cur);
        }
    }
    cout << mn << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}