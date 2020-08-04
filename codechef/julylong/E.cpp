#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(){
	int n;
	cin >> n;
	int arr[n];
	int brr[n];

	for(int i=0;i<n;i++) cin >> arr[i];
	for(int i=0;i<n;i++) cin >> brr[i];
	sort(arr,arr+n);
	sort(brr,brr+n);
	int min1 = min(arr[0], brr[0]);
	map<int,int> mp,mp1;
	for(int i=0;i<n;i++) mp[arr[i]]++;
	for(int i=0;i<n;i++) mp1[brr[i]]++;

	for(auto x:mp){
		if((x.second + mp1[x.first])%2 == 1){
			cout << "-1\n";
			return;
		}
	}
	for(auto x:mp1){
		if((x.second + mp[x.first])%2 == 1){
			cout << "-1\n";
			return;
		}
	}
	// int c1,c2;
	// c1=c2=0;
	// vector<int> a,b;
	// for(auto x:mp){
	// 	if(x.second >= mp1[x.first]){
	// 		c1+=(x.second - (x.second + mp1[x.first])/2);

	// 		for(int i=0;i<(x.second - (x.second + mp1[x.first])/2);i++) a.emplace_back(x.first);
	// 	}
	// 	else{
	// 		c2+=(mp1[x.first] - ((x.second + mp1[x.first])/2));
	// 		for(int i=0;i<(mp1[x.first] - ((x.second + mp1[x.first])/2));i++) b.emplace_back(x.first);
	// 	}
	// }

	//for(auto x:mp1){
		//if(mp[x.first] == 0){
			//int p = x.second;
			//p=p/2;
			//c2=c2+p;
		//}
//	}
	map<int, int> total;
	int c = 0;
	for(int i=0;i<n;i++) total[arr[i]]++;
	for(int i=0;i<n;i++) total[brr[i]]++;
	vector<int> ans;
	for(auto x: total){
		int a = 0, b = 0;
		if(mp[x.first] >= 1)
			a = mp[x.first];
		if(mp1[x.first] >= 1)
			b = mp1[x.first];

		if(a != b)
			{
				for (int i = 0; i < abs(a - b) / 2;i++){
					ans.emplace_back(x.first);
				}
					c = 1;
			}
	}
	if(c == 0){
		cout << 0 << endl;
		return;
	}
	else{
		ll tot = 0;
		sort(ans.begin(),ans.end());
		for (int i = 0; i < ans.size() / 2;i++){
			if(ans[i] > 2* min1)
				tot = tot + 2 * min1;
			else
			{
				tot += ans[i];
			}
			
		}
		cout << tot << endl;
	}

}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}

