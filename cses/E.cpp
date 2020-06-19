#include<bits/stdc++.h>
using namespace std;
vector<string> s;
void permute(string str){
	sort(str.begin(),str.end());
	do {
       s.push_back(str);
    } while (next_permutation(str.begin(), str.end()));
}
int main(){
	string x;
	cin >> x;
	permute(x);
	cout << s.size() <<endl;
	for(auto &it : s){
		cout << it << endl;
	}
	return 0;
}
