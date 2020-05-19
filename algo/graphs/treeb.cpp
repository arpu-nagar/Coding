#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
vector <ll> v[100000+5];
ll cnt[2];

void dfs(int node,int pnode,int color){
    cnt[color]++;
    for(int i=0;i<v[node].size();i++){
        if(v[node][i]!=pnode)
        dfs(v[node][i],node,!color);
    }
}

int main(){
    int n;
    cin >> n;
    for(int i=1;i<n;i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1,0,0);
    cout << cnt[0]*cnt[1]-n+1 << endl;
}