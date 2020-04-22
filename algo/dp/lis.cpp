#include <bits/stdc++.h>
using namespace std;

int lis(vector<int> arr, int n)
{
    int lis[n];

    lis[0] = 1;

    for (int i = 1; i < n; i++)
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }

    return *max_element(lis, lis + n);
}

int main()
{
    int n;
    cout << "Enter n followed by n numbers" << endl;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    cout << lis(a, n) << endl;

    return 0;
}