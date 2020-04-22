//coin change problem by dp

#include <bits/stdc++.h>
using namespace std;

int count(int arr[], int m, int n)
{
    int i, j, x, y; 
    int table[n + 1][m]; 
      
    for (i = 0; i < m; i++) 
        table[0][i] = 1; 
   
    for (i = 1; i < n + 1; i++) 
    { 
        for (j = 0; j < m; j++) 
        {  
            x = (i-arr[j] >= 0) ? table[i - arr[j]][j] : 0; 
   
            y = (j >= 1) ? table[i][j - 1] : 0; 
  
            // total count 
            table[i][j] = x + y; 
        } 
    } 
    return table[n][m - 1]; 
}

int main()
{
    cout << "Enter number of coins" << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter value" << endl;
    int value;
    cin >> value;

    cout << "Total ways are: " << count(arr, n, value) << endl;
    return 0;
}