#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int arr[5];
        int sum = 0;
        for(int i=0;i<5;i++){ cin >> arr[i]; 
        sum+=arr[i];
        }
        int p;
        cin >> p;
        if(sum*p > 120){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}