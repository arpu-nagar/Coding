#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<pair<int,int>> arr(n);

		for(auto x: arr) cin >> x.first >> x.second;

		long long int p = n;
		while(n>=6){
			if(n>=6){
				p=p+n/2;
				n/=2;
			}
		}
		cout << p << "\n";
	}
}
