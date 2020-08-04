#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		if(a == b) cout << "0\n";
		else if(a > b){
			if((a-b)%2 == 0){
				cout << "1\n";
			}
			else{
				cout << "2\n";
			}
		}
		else if(b > a){
			if((b-a)%2 == 1){
				cout << "1\n";
			}
			else{
				cout << "2\n";
			}
		}
	}
}
