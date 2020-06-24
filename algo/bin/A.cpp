#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
	int n;
	cin >> n;
	vector<pair<int,int>> arr(n);
	for(int i=0;i<n;i++){
			int x;
		cin >> x;
	arr[i].first = x;
		arr[i].second = i+1;
	}
	sort(arr.begin(),arr.end());
	vector<int> a(n);
	for(int i=0;i<n;i++){
		a[i] = arr[i].first;
	}
	int q;
	cin >> q;
	while(q--){
		int m;
		cin >> m;
		auto x = upper_bound(a.begin(),a.end(),m);
		int ans = (x - a.begin());
		if(ans == 0 && a[0] > m){
			cout << "0" << endl;
			continue;
		}
		cout << ans << endl;
	}
	return 0;
}
