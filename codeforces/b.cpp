#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(){
    string s;
	cin >> s;
	for(int i=0;i<s.size();i++){
		int p = s[i]-'0';
		cout << p-2;
	}
	cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

