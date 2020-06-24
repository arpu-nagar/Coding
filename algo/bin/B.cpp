	#include <bits/stdc++.h>
	using namespace std;
	using ll = long long int;
	int main(){
		int t;
		cin >> t;
		while(t--){
			int m,tc,th;
			cin >> m >> tc >> th;
			int x = abs(th-tc);
			if(x%3 == 0){
				if(3*m >= x){
					cout << "No" << endl;
				}
				else
					cout << "Yes" << endl;
			}
			else if(x%3 == 1){
				cout << "Yes" << endl;
			}
			else if(x%3 == 2){
				cout << "Yes" << endl;
			}
			else{
				cout <<"Yes" << endl;
			}
		}
		return 0;
	}

