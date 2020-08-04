// 0 1 knapsack using DP

#include <bits/stdc++.h>
using namespace std;


int knapSack(int W,vector<int> wt,vector<int> val,int n){
    
    int K[n+1][W+1];

    for(int i=0;i<=n;i++)
    {
        for(int w=0;w<=W;w++)
        {
            if(i==0 || w==0)
            K[i][w] = 0;
            else if(wt[i-1] <= w)
            K[i][w] = max(val[i-1]+K[i-1][w-wt[i-1]],K[i-1][w]);
            else
            {
                K[i][w] = K[i-1][w];
            }
            return K[n][W];
        }
    }
}

int main()
{
    int n;
    cout << "Enter n followed by n numbers" << endl;
    cin >> n;
    vector<int> a(n),wt(n);
    for (auto &it : a)
        cin >> it;
      cout << "Enter weights" << endl; 
    for( auto &it: a)
    cin >> it;
    cout << "Enter the total capacity" << endl;
    int w;
    cin >> w;

     cout << knapSack(w, wt,a,n) << endl;

    return 0;
}