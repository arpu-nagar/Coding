#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int fun(int a, int b)
{
    int arr[b - a + 1];
    memset(arr, 0, sizeof(arr));
    int max = INT_MIN;
    int count = 0;
    for (int i = 1; i * i <= b; i++)
    {
        int sq = i * i;
        int div;
        if ((a / i) * i >= a)
            div = (a / i) * i;
        else
        {
            div = (a / i + 1) * i;
        }
        for (int j = div; j <= b; j += i)
        {
            if (j < sq)
                continue;
            else if (j == sq)
                arr[j - a]++;
            else
            {
                arr[j - a] += 2;
            }
        }
    }
    for (int i = a; i <= b; i++)
    {
        if (arr[i - a] > max)
        {
            count = 1;
            max = arr[i - a];
        }
        else if (arr[i - a] == max)
            count++;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << fun(a, b) + 1 << endl;
    }

    return 0;
}