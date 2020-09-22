#include <bits/stdc++.h>

using namespace std;
const int mod = 1e9+7;

int main(){
	int n;
	cin >> n;
	int ans = 0;
	while(n > 0){
		int t = n;
		int mx = -1;
		while(t){
			int r = t%10;
			mx = max(mx,r);
			t/=10;
		}
		n-=mx;
		ans++;
	}
	cout << ans << endl;
}


