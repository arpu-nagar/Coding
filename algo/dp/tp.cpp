#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e9;
//int T[100][100];
int main(){
    int eggs=2,floors=4;
    vector<vector<int> > T(eggs+1,vector<int>(floors+1));
        int c =0;
        for(int i=0; i <= floors; i++){
            T[1][i] = i;
        }

        for(int e = 2; e <= eggs; e++){
            for(int f = 1; f <=floors; f++){
                T[e][f] = MAX;
                for(int k = 1; k <=f ; k++){
                    c = 1 + max(T[e-1][k-1], T[e][f-k]);
                    if(c < T[e][f]){
                        T[e][f] = c;
                    }
                }
            }
        }

for(int i=1;i<=eggs;i++){
    for(int j=1;j<=floors;j++) cout << T[i][j] << " ";

    cout << endl;
}

cout << T[eggs][floors] << endl;
}
