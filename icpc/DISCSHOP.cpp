#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string x;
		cin >> x;
		int n = x.length();
		int flag = 0; int pos = -1;
		for(int i=0;i<x.length()-1;i++){
			if(x[i] > x[i+1]){
				flag = 1;
				pos = i;
			}
		}

		if(flag == 0){
			int ans = 0;
			for(int i=0;i<x.length()-1;i++){
					ans+=(x[i]-'0')*pow(10,n-1-i);
			}
			cout << ans << endl;
		}
		else
		{
			int ans = 0;
			for(int i=0;i<x.length();i++){
				if(i != pos){
					ans+=(x[i]-'0')*pow(10,n-1-i);
				}
			}
			cout << ans << endl;
		}
	}
}
