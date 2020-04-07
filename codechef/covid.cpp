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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            arr[i] = x;
        }
        int flag = 0; int old = -1;
        for(int i=0;i<n;i++)
        {
            if(arr[i] == 1)
            {
                if(old == -1)
                {
                    old = i;
                }
                else
                {
                    if(i-old < 6)
                    flag = 1;

                    old = i;
                }
                
            }
        } 
        if(flag == 1)
        cout << "NO" << endl;
        else
        cout << "YES" << endl;
    }
}