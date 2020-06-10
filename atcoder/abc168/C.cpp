#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
const int PI = 3.1415;
int main()
{
    int a,b,h,m;
    cin >> a >> b >> h >> m;
    int dm = m*6;
    int hm = h*30 + m*0.5;
    long double rad = PI * 2 * (h / 12.0 + (m / 60.0) / 12.0 - m / 60.0);
    double c = sqrt(a*a*1.0 + b*b - 2*1.0*a*b*cos(rad));
    cout << c << endl;
    return 0;
}