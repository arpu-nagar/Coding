#include <bits/stdc++.h>
using namespace std;

bool isSum(vector<int> arr, int n, int sum)
{
    bool subset[n + 1][sum + 1];

    for (int i = 0; i <= n; i++)
        subset[i][0] = true;

    for (int i = 1; i <= sum; i++)
        subset[0][i] = false;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (j < arr[i - 1])
                subset[i][j] = subset[i - 1][j];

            if (j >= arr[i - 1])
                subset[i][j] = subset[i - 1][j] || subset[i - 1][j - arr[i - 1]];
        }

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= sum; j++)
                printf("%4d", subset[i][j]);
            printf("\n");
        }

        return subset[n][sum];
    }
}

int main()
{
    int n;
    cout << "Enter n followed by n numbers" << endl;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    cout << "Enter the sum" << endl;
    int sum;
    cin >> sum;
    if (isSum(a, n, sum) == true)
        cout << "YEE" << endl;
    else
        cout << "NEE" << endl;
}