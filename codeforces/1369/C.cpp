#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,j=0,i;
        cin>>n>>k;
        ll ar[n],br[k],sum=0;
        vector<ll>ans[k+5];
        for(i=0;i<=k;i++) ans[i].clear();

        for(i=0;i<n;i++) cin>>ar[i];
        for(i=0;i<k;i++) cin>>br[i];

        sort(ar, ar+n);
        sort(br, br+k);

        for(i=n-1;i>=(n-k);i--)
        {
            ans[j].push_back(ar[i]);
            br[j++]--;
        }
        j=0;
        for(i=n-k-1;i>=0;i--)
        {
            while(br[j]==0) j++;

            ans[j].push_back(ar[i]);
            br[j]--;
        }
        for(i=0;i<k;i++)
        {
            sum+=ans[i][0]+ans[i][ans[i].size()-1];
        }
        cout<<sum<<endl;
    }
}
