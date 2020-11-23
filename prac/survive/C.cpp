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

vector<int> primes;

// Generating all the prime numbers
// from 2 to n.
void SieveofEratosthenes(int n)
{
    bool visited[n];
    for (int i = 2; i <= n + 1; i++)
        if (!visited[i])
        {
            for (int j = i * i; j <= n + 1; j += i)
                visited[j] = true;
            primes.push_back(i);
        }
}

bool specialPrimeNumbers(int n, int k)
{
    SieveofEratosthenes(n);
    int count = 0;
    for (int i = 0; i < primes.size(); i++)
    {
        for (int j = 0; j < i - 1; j++)
        {

            // If a prime number is Special prime
            // number, then we increments the
            // value of k.
            if (primes[j] + primes[j + 1] + 1 == primes[i])
            {
                count++;
                break;
            }
        }

        // If at least k Special prime numbers
        // are present, then we return 1.
        // else we return 0 from outside of
        // the outer loop.
        if (count == k)
            return true;
    }
    return false;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    cout << (specialPrimeNumbers(n, k) == 1 ? "YES" : "NO");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t = 1;
    while (t--)
        solve();
    return 0;
}