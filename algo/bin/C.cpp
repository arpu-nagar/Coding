#include <bits/stdc++.h>
using namespace std;

int main(){
int t = 1;
cin >> t;
while(t--){
	int n,k;
	cin >> n >> k;
	if(n >= 6 && n%k == 0 && n != k){
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;

}
return 0;
}
