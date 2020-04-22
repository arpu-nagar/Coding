#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;
    long long sum, mx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum = 0;
        long long* a =new long long[n];
        for(i=0; i<n; i++)
            cin>>a[i];
            mx = a[0];
            for(i=0; i<n-1; i++)
            {
                if((a[i]*a[i+1])<0)
                {
                    sum = sum+mx;
                    mx = a[i+1];
                }
                else
                {
                    if(a[i+1]>mx)
                        mx = a[i+1];
                }
            }
            sum = sum+mx;
            cout<<sum<<endl;
 
    }
}
 