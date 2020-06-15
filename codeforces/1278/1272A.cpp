    /**
     *  Hi, I'm Arpan.
     *  Hardwork beats talent if talents doesn't work hard, friend me if you want to. ✌.|•͡˘‿•͡˘|.✌
     * 
    */

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
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr,arr+3);
        if(arr[0] == arr[1] && arr[1] == arr[2]){
            cout << "0\n";
        }
        else if(arr[0] == arr[1] && arr[1]!=arr[2]){
            cout << max(arr[2]+arr[2] - 2*arr[0]-4,0) << endl;
        }
        else if (arr[1] == arr[2] && arr[1] != arr[0])
        {
            cout << max(arr[2]*2 -4 - arr[0]*2,0) << endl;
        }
        else
        {
            cout << arr[1]-arr[0]-1 + arr[2]-arr[1]-1 + arr[2]-arr[0]-2 << endl;
        }
        
    }

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin >> t;
        while (t--)
        {
            solve();
        }
        return 0;
    }