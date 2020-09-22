#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main()
{
	double c;
	cin >> c;
	cout << setprecision(20);
	double ans = 0;
	int ok = 1;
	double l = 0.0, r = 1000000.0;
	for(int i=0;i<100;i++)
	{
			double x = (l+r)/2.0;
			if(x*x + sqrt(x) == c){
				ok = 0;
				ans = x;
			}
			if(x*x + sqrt(x) > c)
			r = x;
			else
			l = x;
	}
	if(ans == 0.0)
	cout << setprecision(20) << l;
	else
	cout << ans << endl;
}

