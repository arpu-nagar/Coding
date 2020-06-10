#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string x, y;
        cin >> x;
        cin >> y;
        int c = -1;
        int arr[26] = {0};
        int brr[26] = {0};
        for(int i=0;i<n;i++){
            arr[x[i] - 'a']++;
            brr[y[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            if(brr[i] != 0 && arr[i] > 0)
            c = 0;
        }

        if(c !=0){
            c = -1;
            for (int i = 0; i < n; i++)
            {
                if (x[i] < y[i])
                    c = 0;
            }
            if(c != 0){
                vector<int> v;
                
            }
            else
            {
                cout << "-1\n";
            }
            
        }
        else
        {
            cout << "-1\n";
        }
        
    }
}
