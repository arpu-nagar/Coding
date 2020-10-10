
// author: arpunagar

#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve(){
	int h1,a1,c1;
	cin >> h1 >> a1 >> c1;
	int h2,a2;
	cin >> h2 >> a2;
	int c = 0;
	vector<string> ans;
	while(true){
		if(h2 <= 0){
			cout << ans.size() << endl;
			for(auto x : ans) cout << x << endl;
			return;
		}
		if(h2-a1 <= 0){
			ans.push_back("STRIKE");
			cout << ans.size() << endl;
			for(auto x: ans) cout << x << endl; return;
		}
		else{
			if(h1-a2 <= 0){
				ans.push_back("HEAL");
				h1+=c1;
				h1-=a2;
			}
			else{
				ans.push_back("STRIKE");
				h1-=a2;
				h2-=a1;
			}
		}
	}
}

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t = 1;

        while (t--)
            solve();
        return 0;
}




