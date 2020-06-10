#include <bits/stdc++.h>
using ll = long long int;
using namespace std;

int main(){
    int t;
    cin >> t;
    int a = t%10;
    if(a == 2 || a==4 || a==5 || a==7 || a==9){
        cout << "hon\n";
    }
    else if(a == 0 || a == 1 || a == 6 || a == 8){
        cout << "pon\n";
    }
    else{
        cout << "bon" << endl;
    }
    return 0;
}