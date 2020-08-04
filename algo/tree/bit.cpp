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
pair<ll, ll> max_p(pair<int, int> a, pair<int, int> b)
{

	if (a.first == -1)
	{
		return b;
	}
	else if (b.first == -1)
	{
		return a;
	}
	if (a.second > b.second)
	{
		return a;
	}
	return b;
}

void build_tree(vector<ll> &arr, vector<pair<ll, ll>> &seg_tree, ll l, ll r, ll pos)
{
	if (l == r)
	{
		seg_tree[pos] = {l, arr[l]};
		return;
	}
	ll mid = l + (r - l) / 2;
	build_tree(arr, seg_tree, l, mid, 2 * pos + 1);
	build_tree(arr, seg_tree, mid + 1, r, 2 * pos + 2);
	seg_tree[pos] = max_p(seg_tree[2 * pos + 1], seg_tree[2 * pos + 2]);
}

pair<ll, ll> range_max(ll left, ll right, vector<pair<ll, ll>> &seg_tree, ll low, ll high, ll pos)
{
	if (left <= low && right >= high)
	{
		return seg_tree[pos];
	}
	if (left > high || right < low)
	{
		return {-1, INT_MIN};
	}
	int mid = low + (high - low) / 2;

	return max_p(range_max(left, right, seg_tree, low, mid, pos * 2 + 1), range_max(left, right, seg_tree, mid + 1, high, pos * 2 + 2));
}

pair<ll, ll> max_between(vector<pair<ll, ll>> &seg_tree, ll left, ll right, ll low, ll high, ll pos)
{
	if (left > right)
	{
		ll temp = left;
		left = right;
		right = temp;
	}
	return range_max(left, right, seg_tree, low, high, pos);
}

void slve(){
    ll n, q;
	cin >> n >> q;
    vl den_height(n), taste(n);
    inv(den_height);
    inv(taste);
    vector<pair<ll, ll>> seg_tree;
	for (int i = 0; i < 2 * n; i++)
	{
		seg_tree.push_back({-1, INT_MIN});
	}
	build_tree(den_height, seg_tree, 0, n - 1, 0);

	while (q--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 1)
		{
			taste[b - 1] = c;
		}
		else
		{
			ll src = b - 1;
			ll dest = c - 1;
			bool flag = true;
			if (src == dest)
			{
				cout << taste[src] << endl;
				continue;
			}
			if (den_height[src] <= den_height[dest])
			{
				cout << -1 << endl;
				continue;
			}
			int dir = (dest - src) / abs(dest - src);
			ll curr = src;
			ll next;
			ll total_taste = taste[src];
			while (curr != dest)
			{
				pair<ll, ll> next_peak = max_between(seg_tree, curr + dir, dest, 0, n - 1, 0);
				if (next_peak.second > den_height[curr])
				{
					total_taste = -1;
					break;
				}
				else if (next_peak.second == den_height[curr])
				{
					if (curr == src)
					{
						total_taste = -1;
						break;
					}
					total_taste -= taste[curr];
				}
				total_taste += taste[next_peak.first];
				curr = next_peak.first;
			}
			cout << total_taste << endl;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    int t = 1;
    while(t--){
        slve();
    }
    return 0;
}