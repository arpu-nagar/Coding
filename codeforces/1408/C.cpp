
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
#define sortv(v) sort(v.begin(),v.end())
#define db(x) cout << (#x) << " is " << (x) << endl;
#define rsortv(v) sort(v.begin(),v.end(), greater<>());

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

void solve(){
	ll n,l;
	cin >> n >> l;
	vl a(n);
	inv(a);
	ll c1,c2;
	c1 = 0, c2 = l;
	double ans = 0.0;

	double time = 0.0;
	int s = 1;
	vector<double> t1(n);
	for(int i=0;i<n;i++){
		double x = (a[i]*1.0)/s;
		s++;
		t1[i] = x;
	}
	s = 1;
	double sum = 0.0;
	double dis = 0;
	for(int i=n-1;i>=0;i--){
		double p;
		if(i == n-1) p = l;
		else
			p = a[i+1];
		double x = ((p - a[i])*1.0)/s;
		sum+=x;
		dis+=a[i];
		auto it = upper_bound(t1.begin(),t1.end(), x);
		if(a[it-t1.begin()] >= a[i]){
			//
			double sum1, dis1;
			sum1 = dis1 = 0.0;
			for(int j = 0;j<it-t1.begin();j++){
			sum1+=t1[j];
			dis1+=a[j];
			}
			double crap = dis/sum;
			double crap1 = dis1/sum1;
			double crap2 = crap1/crap;
			crap2+=1;
			cout <<((l*1.0)/crap2) << endl;
			return;
		}
		s++;
	}
}

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t = 1;
        cin >> t;

        while (t--)
            solve();
        return 0;
}




