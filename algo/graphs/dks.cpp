#include <bits/stdc++.h>
using namespace std;
const int INF = INT_MAX;
const int N = 1e5;
vector<pair<int,int>> adj[N];

int main(){
    //accept a graph
    int n = 10;
    bool vis[n + 1];
    memset(vis, false, sizeof(vis));
    int distance[N];
    for (int i = 1; i <= n;i++)
        distance[i] = INF;

    priority_queue<pair<int,int>> q;
    int x = 1; //source
    distance[x] = 0;
    q.push({0, x});
    while(!q.empty()){
        int a = q.top().second;
        q.pop();
        if(vis[a])
            continue;
        vis[a] = true;
        for(auto u: adj[a]){
            int b = u.first, w = u.second;
            if (distance[a]+w < distance[b]) {
             distance[b] = distance[a]+w;
            q.push({-distance[b],b});
}
        }
    }
}