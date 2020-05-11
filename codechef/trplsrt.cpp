#include<bits/stdc++.h>
using namespace std;
using li = long long int;

void swaps(li *a, li i1, li i2, li i3)
{
	li temp = a[i3];
	a[i3] = a[i2];
	a[i2] = a[i1];
	a[i1] = temp;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		li n,k;
		cin>>n>>k;
		li arr[n],brr[n];
		for(li i=0;i<n;i++)
		{
			cin>>arr[i];
			brr[i] = arr[i];	
		}
		sort(brr,brr+n);
		
		unordered_map<li,li>id;
		for(li i=0; i<n;i++)
			id[brr[i]] = i;
		
		li ans = 0;
		vector<pair<li,pair<li,li>>> steps;
		li prevf=-1,prevs=-1,i1,i2,i3;
		for(li i=0; i<n; )
		{
			if(arr[i]==brr[i] || prevs==i) 
			{
				i++;
				continue;
			}
			i1 = i;
			i2 = id[arr[i1]];
			i3 = id[arr[i2]];
			if(i3==i1 && prevf==-1)
			{
				prevf = i1;
				prevs = i2;
				i++;
				continue;
			}
			else if(i3==i1)
			{
				i1 = prevf;
				i2 = prevs;
				i3 = i;
				prevf=-1;
				prevs=-1;
			}
		
			swaps(arr,i1,i2,i3);
			ans++;
			steps.push_back({i1+1,{i2+1,i3+1}});
			if(arr[i1]==brr[i1])
				i++;
			
			if(ans>k)
			{
				ans = -1;
				break;
			}
		}
		
		if(prevf!=-1) ans = -1;
		
		if(ans<=k && ans!=-1)
		{
			cout<<ans<<"\n";
			for(auto &x: steps)
				cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<"\n";
		}
		else
			cout<<"-1"<<"\n";
	}

	return 0;
}