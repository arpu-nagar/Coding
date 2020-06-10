#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define pb push_back;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        int arr[100][100];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = 0;
            }
        }
        cin >> n >> p;
        cout << "1 1 1 " << n << " " << n << endl;
        int x;
        cin >> x;
        if(x == n*n || x == 0){
            if(x == n*n){
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {
                        arr[i][j] = 1;
                    }
                }
            }
        } 
        else
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                int ok = 0;
                for (int j = 0; j < n; j++)
                {
                    cout << "1 " << i + 1 << " " << j + 1 << " " << i + 1 << " " << j + 1 << endl;
                    cin >> arr[i][j];
                    if(arr[i][j]){
                        count++;
                    }
                    if(count == x){
                        ok = 1;
                    }
                }
                if(ok == 1) break;
            }
        }
        cout << "2" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        int y;
        cin >> y;
        if (y == -1)
        {
            break;
        }
    }
    return 0;
}