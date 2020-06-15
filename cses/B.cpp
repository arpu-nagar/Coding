#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = 0;
    for(int i=0;i<n-1;i++){
        int p;
        cin >> p;
        x^=p;
    }
    for(int i=0;i<n;i++){
        x^=(i+1);
    }
    cout << x << endl;
}