#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int p;
    cin >> p;
    
    int c = 0;int i = 0;
    for( i=0;i<n;i++){
        if(p >= arr[i]){
            p-= arr[i];
        }
        else
        {
            if(c >=1){
                p+=arr[i];
            }
            else
            {
                break;
            }
            
        }
        
    }
    cout << i << endl;
    return 0;
}