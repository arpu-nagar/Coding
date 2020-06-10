#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
int arr[100000][100000] = {0};
bool visited[100000];


int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a>> b;
        arr[a-1][b-1] = 1;
        arr[b-1][a-1] = 1;
    }
    return 0;
}