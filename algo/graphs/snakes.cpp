#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T;
    cin>>T;
    
    for(int tc=0;tc<T;++tc)
    {
        int ns,nl;
        int graph[101][101];
        for(int i=1;i<=100;++i)
            for(int j=1;j<=100;++j)
                graph[i][j] = 100;
        cin>>nl;
        char tp;
        cin>>tp;
        cin>>ns;
        set<int> ladders;
        set<int> snakes;
        for(int i=0;i<nl;++i)
        {
            int ls,le;
            cin>>ls;
            cin>>tp;
            cin>>le;
            ladders.insert(ls);
            graph[ls][le] = 0;
        }
        for(int i=0;i<ns;++i)
        {
            int ls,le;
            cin>>ls;
            cin>>tp;
            cin>>le;
            snakes.insert(ls);
            graph[ls][le] = 0;
        }
        for(int i=1;i<=100;++i)
        {
            if(ladders.find(i) == ladders.end() && snakes.find(i) == snakes.end())
            {
                for(int j=1;j<=6 && i+j<=100;++j)
                {
                    graph[i][i+j] = 1;
                }
            }
        }
        for(int i=1;i<=100;++i)
            for(int j=1;j<=100;++j)
                for(int k=1;k<=100;++k)
                {
                    if(graph[i][j] > graph[i][k] + graph[k][j])
                    {
                        graph[i][j] = graph[i][k] + graph[k][j];
                    }
                }
        cout<<graph[1][100]<<endl;
    }
    return 0;
}