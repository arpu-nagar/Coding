#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
char g[1000][1000];
int vis[1000][1000];

void dfs(int i,int j,int n,int m){
    if(i >= 0 && i < n && j>=0 && j < m){
        if(g[i][j] == '#')
            return;
        if(vis[i][j])
            return;
        vis[i][j] = 1;
        dfs(i + 1, j, n, m);
        dfs(i, j + 1, n, m);
        dfs(i - 1, j, n, m);
        dfs(i, j - 1, n, m);
    }
    else
    {
        return;
    }
    
}

int main()
{
    int n,m;
    cin >> n >> m;

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> g[i][j];
        }
    }
    int c = 0;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(g[i][j] == '.' && !vis[i][j]){
                c++;
                dfs(i, j,n,m);
            }
        }
    }

    cout << c;
    return 0;
}