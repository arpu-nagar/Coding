#include <bits/stdc++.h>
using namespace std;

const int inf = 10000004;
const int nax  =5005;
int degree[nax];
bool t[nax][nax];


int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        t[a][b] = t[b][a] = true;
        degree[a]++;
        degree[b]++;
    }
    int result = inf;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;++j){
            if(t[i][j]){
                for(int k=j+1;k<=n;k++){
                    if(t[i][k] && t[j][k])
                        result = min(result,degree[i]+degree[j]+degree[k]);
                }
            }
        } 
    }
    if(result == inf) cout << "-1\n";
        else
        {
            cout << result - 6 << endl;
        }

        return 0;
}