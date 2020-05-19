#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

const int N = 100010;

int main()
{
	int n, k, t;
	char s[N];
	queue<int> p[N];
    cin >> n >> k >> t >> s;
    for (int i = 0; i < n; i++) if (s[i] == '1') p[i % k].push(i);
    for (int i = 0; i < n; i++) if (s[i] == '1') p[i % k].pop(); else
    if (!p[i % k].empty() && t >= (p[i % k].front() - i) / k)
    {
        swap(s[i], s[p[i % k].front()]);
        t -= (p[i % k].front() - i) / k;
        p[i % k].pop();
    }
    cout << s << endl;
    return 0;
}