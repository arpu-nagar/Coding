
// author: arpunagar

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
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
	int n;
	cin >> n;
	int t,s;
	t = s = 0;
	for(int i=0;i<50;i++){
		for(int j = 0;j<50;j++){
			int a = j*7 + i*3;
			if(a == n){
				cout << "YES" << endl; return;
			}
		}
	}
	cout << "NO" << endl;
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




