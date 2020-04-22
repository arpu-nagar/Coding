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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            int product = 1;
            for (int j = i; j < n; j++)
            {
                product = product * (abs(arr[j]));
                if(product % 4 != 2)
                {c++;}
                
                product %=4;
            }
        }
        cout << c << "\n";
    }
    return 0;
}