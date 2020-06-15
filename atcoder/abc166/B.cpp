#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int arr[n] = {0};
    for(int i=0;i<k;i++){
        int d;
        cin >> d;
        while(d--){
            int k;
            cin >> k;
            arr[k-1]++;
        }
    }
    int c = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            c++;
        }
    }
    cout << c << endl;
    return 0;
}