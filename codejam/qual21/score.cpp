
// author: arpunagar

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
#define pb push_back
#define popb pop_back()
#define endl "\n"
#define fi first
#define se second
#define ar array
typedef priority_queue<ll, vector<ll>, greater<ll>> minheap;
typedef priority_queue<ll> maxheap;
#define sortv(v) sort(v.begin(),v.end())
#define db(x) cout << (#x) << " is " << (x) << endl;
#define rsortv(v) sort(v.begin(),v.end(), greater<>());

ll nCr(ll n, ll r) {
    ll res = 1;
    if (r > n - r) {
        r = n - r;
    }
    for(int i=0;i<r;i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

void solve(){
	int x; cin >> x;
    int arr[100][100];
    for(int i = 0;i<100;i++){
        string s; cin >> s;
        for(int j = 0;j<100;j++){
            arr[i][j] = s[j]=='1'? 1:0;
        }
    }
    // int cheaters = 0;
    int tot[100];
    memset(tot,0,sizeof(tot));
    for(int i = 0;i<100;i++){
        for(int j = 0;j<100;j++){
            tot[j]+=arr[i][j];
        }
    }
    int cheaters = 0;
    double avg = 0;
    for(int i = 0;i<100;i++){
        avg+=tot[i];
    }
    avg = avg*1.0;
    avg /= 100.0;
    for(int i=0;i<100;i++){
        if(tot[i] > avg) cheaters++;
    }
    cout << cheaters << '\n';
   
}

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int tt; cin >> tt;
        for(int i = 1;i<=tt;i++){
            cout << "Case #" << i << ": ";
            solve();
        }
            // solve();
        return 0;
}