	#include <bits/stdc++.h>
using namespace std;
#define mod 1e9;
using ll = long long int;

int main(){
	int n;
	cin >> n;
	set<int> s;
	for(int i =0;i<n;i++){
		int x;
		cin >> x;
		if(x != 0){
			s.insert(x);
		}
	}
	cout << s.size();
}

