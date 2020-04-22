//min no of coins required problem by dp

#include <bits/stdc++.h>
using namespace std;

int minCoin(vector<int> coins, int m, int V)
{
    int table[V + 1];
    table[0] = 0;
    for (int i = 1; i <= V; i++)
        table[i] = INT_MAX;
    
    for(int i=1;i<=V;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(coins[j] <= i)
            {
                int sub_res = table[i-coins[j]];
                if(sub_res != INT_MAX && sub_res + 1 < table[i])
                {
                    table[i] = sub_res + 1;
                }
            }
        }
    }
    return table[V];
}

int main()
{
    int n;
    cout << "Enter the minimum no of coins" << endl;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    cout << "Enter the cost" << endl;
    int V;
    cin >> V;
    cout << "Min coins is : " << minCoin(a, n, V) << endl;

    return 0;
}