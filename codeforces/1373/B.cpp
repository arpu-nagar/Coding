#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
#define inv(v)         \
    for (auto &it : v) \
        cin >> it;
#define MOD 1000000007

void solve()
{
    string s;
    cin >> s;

	int c = 0;int o,e;o=e=0;
	for(int i=0;i<s.length()-1;i++){
		if(s[i] != s[i+1]){
			c++;
		}
	}

	if(c == 0){
		cout << "NET" << endl;
	}
	else{
		for(int i=0;i<s.length();i++){

		if(s[i] == '0') o++;
		else e++;
	}
		if(min(o,e)%2 == 1){
			cout << "DA" << endl;
		}
		else{
			cout << "NET" << endl;
		}
	}

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
