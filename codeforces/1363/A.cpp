#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define N 2e5

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n >> x;
        int e,o; e=0;o=0;
        for(int i=0;i<n;i++){
            int q;
            cin >> q;
            if(q%2 == 0) e++;
            else
            {
                o++;
            }   
        }
        if(x%2 == 0){
            if(o >=1 && e >= (x-1)){
                cout << "Yes" <<endl;   
            }
            else if(o >=1 && e <= (x-1) && e>=1){
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else{
            if(o >= x){
                cout << "Yes" << endl;
            }
            else if(){

            }
            else
            {
                cout << "No" << endl;
            }
            
        }
    }
}