#include <cstdio>
#include <cstring>
#include <bits/stdc++.h>
const char kT[][32] = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};
char x[256], y[256];

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    for (int i = 0; i < 3; ++i)
    {
        int n = strlen(kT[i]);
        for (int j = 0; j < n; ++j)
        {
            x[kT[i][j]] = i;
            y[kT[i][j]] = j;
        }
    }
    char cmd[2], buf[128];
    scanf("%s", cmd);
    scanf("%s", buf);
    int n = strlen(buf);
    for (int i = 0; i < n; ++i)
    {
        int r = x[buf[i]], c = y[buf[i]];
        if (cmd[0] == 'R')
        {
            --c;
        }
        else
        {
            ++c;
        }
        putchar(kT[r][c]);
    }
    puts("");
    return 0;
}