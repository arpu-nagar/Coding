#include <bits/stdc++.h>
using namespace std;
const int inf = 1e9;
int main(){
    int n;
    cin >> n;
    vector<int> adj[n];
    int e;
    cin >> e;
    for (int i = 0; i < e;i++){
        int a,b;
        cin >> a >> b;
        adj[a - 1].push_back(b - 1);
        adj[b - 1].push_back(a - 1);
    }
    vector<int> dis(n, inf);
    int src = 0;
    int des = 2;
    priority_queue<pair<int,int>> pq;
    

}