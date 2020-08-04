/**
 *  Hi, I'm Arpan.
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
#define pb push_back
#define popb pop_back()
#define endl "\n"
#define fi first
#define se second
typedef priority_queue<ll, vector<ll>, greater<ll>> minheap;
typedef priority_queue<ll> maxheap;
#define sortv(v) sort(v.begin(),v.end())
#define rsortv(v) sort(v.begin(),v.end(), greater<>());

ll modPower(ll num,ll r) {
	if(r==0) return 1;
	if(r==1) return num%MOD;
	ll ans=modPower(num,r/2)%MOD;
	if(r%2==0) {
		return (ans*ans)%MOD;
	} return (((ans*ans)%MOD)*num)%MOD;
}

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
const int MAX = 10000001;

// array to store prime factors
int factor[MAX] = { 0 };

// function to generate all prime factors
// of numbers from 1 to 10^6
void generatePrimeFactors()
{
    factor[1] = 1;

    // Initializes all the positions with their value.
    for (int i = 2; i < MAX; i++)
        factor[i] = i;

    // Initializes all multiples of 2 with 2
    for (int i = 4; i < MAX; i += 2)
        factor[i] = 2;

    // A modified version of Sieve of Eratosthenes to
    // store the smallest prime factor that divides
    // every number.
    for (int i = 3; i * i < MAX; i++) {
        // check if it has no prime factor.
        if (factor[i] == i) {
            // Initializes of j starting from i*i
            for (int j = i * i; j < MAX; j += i) {
                // if it has no prime factor before, then
                // stores the smallest prime divisor
                if (factor[j] == j)
                    factor[j] = i;
            }
        }
    }
}

// function to calculate number of factors
ll calculateNoOFactors(ll n)
{
    if (n == 1)
        return 1;

    ll ans = 1;

    // stores the smallest prime number
    // that divides n
    ll dup = factor[n];

    // stores the count of number of times
    // a prime number divides n.
    ll c = 1;

    // reduces to the next number after prime
    // factorization of n
    ll j = n / factor[n];

    // false when prime factorization is done
    while (j != 1) {
        // if the same prime number is dividing n,
        // then we increase the count
        if (factor[j] == dup)
            c += 1;

        /* if its a new prime factor that is factorizing n,
           then we again set c=1 and change dup to the new
           prime factor, and apply the formula explained
           above. */
        else {
            dup = factor[j];
            ans = ans * (c + 1);
            c = 1;
        }

        // prime factorizes a number
        j = j / factor[j];
    }

    // for the last prime factor
    ans = ans * (c + 1);

    return ans;
}
/*******************************************/

void solve()
{
	generatePrimeFactors();
    ll n;
	cin >> n;
	ll ans = 0;
	for(int i=1;i<=n;i++){
		ans = ans + i*calculateNoOFactors(i);
	}
	cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
        solve();
    return 0;
}

