#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end(), greater<int>());
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] - i <=0 )
            break;
            else
            {
                sum  = (sum+arr[i]-i)%1000000007;
            }
            
        }
        cout << sum << "\n";
    }
    return 0;
}