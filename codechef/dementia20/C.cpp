#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("tune=native")
using namespace std;
typedef long long ll;
typedef long double ld;

const int MAX_N = 1000005;

bool isPrime[MAX_N];
int res[MAX_N];

int32_t main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	for (int i = 2; i < MAX_N; i++)
		isPrime[i] = true;
	for (int i = 2; i * i < MAX_N; i++)
		if (isPrime[i])
			for (int j = i * i; j < MAX_N; j += i)
				isPrime[j] = false;

	res[1] = 0;
	res[2] = 0;
	for (int i = 3; i < MAX_N; i++)
	{
		res[i] = res[i - 1];
		if (isPrime[i] && (i % 2 != 0))
			res[i]++;
	}

	res[2] = 1;
	for (int i = 3; i < MAX_N; i++)
		res[i] += (i - 2);

	int tests; cin >> tests;
	while (tests--)
	{
		int n; cin >> n;
		cout << res[n] << '\n';
	}

	return 0;
}
