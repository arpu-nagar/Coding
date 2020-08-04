	#include <bits/stdc++.h>
	using namespace std;

	using ll = long long int;

	int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k,d;
		cin >> n >> k >> d;
		vector<int> a(n);
		for(auto &it : a) cin >> it;
		if(d==1){
			cout << "1\n";
			continue;
		}
		set<int> s;
		map<int,int> mp;
		int min1 = n+1;
		for(int i=0;i<n;i++){
			if(i < d){
				s.insert(a[i]);
				mp[a[i]]++;
			}
			else{
				int p =s.size();
				min1 = min(min1,p);
				s.insert(a[i]);
				mp[a[i]]++;
				if(mp[a[i-d]]== 1 ){
					mp[a[i-d]] = 0;
					s.erase(s.find(a[i-d]));
				}
				else{
					mp[a[i-d]] = mp[a[i-d]] -1;
				}
			}
		}
		int p =s.size();
		min1 = min(min1,p);
		cout << min1 << endl;

	}
	return 0;
	}
