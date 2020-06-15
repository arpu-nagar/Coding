#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n < 4){
        if(n !=1)
        cout << "NO SOLUTION";
        else
        {
            cout << "1";
        }
        
    }
    else
    {
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
        for(int i=1;i<=n;i+=2){
            cout << i << " ";
        }
    }
    
}