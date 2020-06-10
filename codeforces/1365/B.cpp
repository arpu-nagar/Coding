#include <bits/stdc++.h>
#define pb push_back
#define ef(i, u) for (int i = b[u]; i; i = nxt[i])
#define rep(i, a, b) for (int i = a; i <= b; ++i)
#define per(i, b, a) for (int i = b; i >= a; --i)
#define gcd(a, b) __gcd(a, b)
#define MEM(a, x) memset(a, x, sizeof(a))
#define VI vector<int>
#define PII pair<int, int>
#define ull unsigned long long
#define ll long long
#define fi first
#define se second
#define INF 0x3f3f3f3f
using namespace std;
const int N = 2e5 + 5;
template <class T>
inline void read(T &res)
{
    char c;
    T flag = 1;
    while ((c = getchar()) < '0' || c > '9')
        if (c == '-')
            flag = -1;
    res = c - '0';
    while ((c = getchar()) >= '0' && c <= '9')
        res = res * 10 + c - '0';
    res *= flag;
}
int n, a[N], b[N], idx[N];
map<int, int> mp;
int main()
{
    cin >> n;
    rep(i, 1, n) cin >> a[i], idx[a[i]] = i;
    rep(i, 1, n) cin >> b[i];
    int ans = 0;
    rep(i, 1, n)
    {
        int k = idx[b[i]];
        if (k >= i)
        {
            mp[k - i]++, ans = max(ans, mp[k - i]);
            mp[(k - i) - n]++, ans = max(ans, mp[(k - i) - n]);
        }
        else
        {
            mp[k - i]++, ans = max(ans, mp[k - i]);
            mp[n - abs(k - i)]++, ans = max(ans, mp[n - abs(k - i)]);
        }
    }
    cout << ans << '\n';
    return 0;
}