#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(){
	int k;
	cin >> k;
	k=k-1;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(i == 0 && j == 0){
				cout << "O";
				continue;
			}
			if(k > 0){
				cout << ".";
				k--;
			}
			else{
				cout << "X";
			}
		}
		cout << endl;
	}
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		solve();
	}
}

