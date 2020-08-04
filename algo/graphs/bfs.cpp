#include <bits/stdc++.h>
using namespace std;

queue<int> q;

void bfs(bool mat[1001][1001],int dist[],int visited[],int start,int numVert){
    visited[start] = 1;
    q.push(start);
    while(!q.empty()){
        q.pop();
        for(int i=1;i<=numVert;i++){
            if(mat[start][i] == 1 && visited[i] == 0){
                dist[i]=dist[start]+6;
                visited[i] = 1;
                q.push(i);
            }
        }
        start=q.front();
    }
}


int main(){
    int t;
    cin >> t;
    while(t--){
        bool mat[1001][1001] ={0};
        int v,e;
        cin >> v >> e;
        for(int i=1;i<=e;i++){
            int e1,e2;
            cin >> e1 >> e2;
            mat[e1][e2] = 1;
            mat[e2][e1] = 1;
        }

        int dist[v+1]; 
        int visited[v+1];
        for(int i=0;i<=v;i++){
            dist[i] = -1;
            visited[i] = 0;
        }
        int start;
        cin >> start;
        dist[start] = 0;
        bfs(mat,dist,visited,start,v);
        for(int i=1;i<=v;i++){
            if(i!=start){
                cout << dist[i] << " ";
            }
        }
        cout << endl;
    }
}