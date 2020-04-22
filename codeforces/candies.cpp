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
        for (int i = 2;; i++)
        {
            int num = (int)pow(2, i) - 1;
            if(n%num == 0)
            {
                int some = n/num;
                cout << some << endl;
                break;
            }

            if(num > n)
            break;
        }
    }
    return 0;
}