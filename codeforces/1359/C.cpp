#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input01.txt","r",stdin);
    //freopen("output01.txt","w",stdout);
    long long int q;

    cin >> q;
    while (q--)
    {
        long long int h, c, t, high = 100000000000, low = 0, ans, mid, f1 = 0, f2 = 0, tempmid;
        long double avg, temp, curr, temp2;
        cin >> h >> c >> t;
        if (t >= h)
        {
            ans = 1;
        }
        else if ((h + c) * (1.0) / 2 >= t)
        {
            ans = 2;
        }
        else
        {
            mid = (high + low) / 2;
            while (low < high)
            {
                mid = (low + high) / 2;
                temp = (mid * h + (mid - 1) * c) * 1.0 / (2 * mid - 1);
                if (temp < t && f2 == 0)
                {
                    high = mid - 1;
                    ans = 2 * mid - 1;
                    curr = temp;
                    tempmid = mid - 1;
                    temp2 = (tempmid * h + (tempmid - 1) * c) * 1.0 / (2 * tempmid - 1);
                    if (temp2 >= t)
                    {
                        if (abs(temp2 - t) < abs(temp - t))
                        {
                            ans = 2 * tempmid - 1;
                            break;
                        }
                        else
                        {
                            ans = 2 * mid - 1;
                            break;
                        }
                    }
                }
                else if (temp == t)
                {
                    ans = 2 * mid - 1;
                    break;
                }
                else if (temp > t && f1 == 0)
                {
                    low = mid + 1;
                    ans = mid;
                    curr = temp;
                    tempmid = mid + 1;
                    temp2 = (tempmid * h + (tempmid - 1) * c) * 1.0 / (2 * tempmid - 1);
                    if (temp2 <= t)
                    {
                        if (abs(temp2 - t) < abs(temp - t))
                        {
                            ans = 2 * tempmid - 1;
                            break;
                        }
                        else
                        {
                            ans = 2 * mid - 1;
                            break;
                        }
                    }
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}