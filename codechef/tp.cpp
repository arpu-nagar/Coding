#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

vector<int> primes;
const int MX = 1e7;
bool prime[MX + 1];
void solve() {
	int n; cin >> n;
	auto high = lower_bound(primes.begin(), primes.end(), n);
	if (*high == 2) {
		cout << 1 << '\n';
		return;
	}
	high--;
	auto low = lower_bound(primes.begin(), primes.end(), (*high) / 2);
	low--;
	// cout << *high << endl;
	// cout << *low << endl;
	cout << 1 + (high - low) << '\n';
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	memset(prime, true, sizeof(prime));
	for (int p = 2; p * p <= MX; p++)
	{
		if (prime[p] == true)
		{
			for (int i = p * p; i <= MX; i += p)
				prime[i] = false;
		}
	}
	for (int p = 2; p <= MX; p++)
		if (prime[p])
			primes.push_back(p);
	while (t--)
		solve();
}
