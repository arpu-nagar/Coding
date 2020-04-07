#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        vector<vector<int>> arr;
        int brr[n] = {0};

        for (int p = 2; p <= n; p++)
        {
            vector<int> x;

            // if (p == 2)
            //     x.push_back(1);

            for (int j = p; j <= n; j += p)
            {
                if (brr[j - 1] == 0)
                {
                    brr[j - 1] = 1;
                    x.push_back(j);
                }
            }
            if (!x.empty())
                arr.push_back(x);
        }
        vector<vector<int>> crr;
        
        for (int i = 0; i < arr[0].size(); i++)
        {
            vector<int> x;
            crr.push_back(x);
        }
        for(int j = 0;j<arr.size();j++)
        for (int i = 0; i < arr[j].size(); i++)
        {
            if(j==0 && i == 0)
            crr[i].push_back(1);
            crr[i].push_back(arr[j][i]);
        }
        cout << crr.size() << endl;
         for (int i = 0; i < crr.size(); i++) { 
        for (int j = 0; j < crr[i].size(); j++) 
        {   if(j==0)
            cout << crr[i].size() << " ";
            cout << crr[i][j] << " ";} 
        cout << "\n"; 
    } 

    }
    return 0;
}