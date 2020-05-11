//last updated : 24.04.2020
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

#define mp make_pair
#define pb push_back
#define fi first
#define se second

#define endl '\n'
#define init                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define db(x) cout << ">>>>>> " << #x << " -> " << x << endl

const ll inf = INT_MAX;
const ll MAX = 1e5 + 5;
const ll MOD = 1e9 + 7;
const double pi = acos(-1.0);
const double EPS = 1e-9;

ll n, k, j, sum, mx, dx;
ll arr[5 * MAX];

int main()
{
    init;

    mx = inf;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];

        sum += arr[i];
        if (i > k)
            sum -= arr[i - k];
        if (i > k && sum < mx)
        {
            mx = sum;
            dx = i - k + 1;
        }
    }

    cout << dx << endl;
    return 0;
}