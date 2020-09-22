#include <bits/stdc++.h>
using namespace std;

void hanoi(int n,char source, char des, char aux,int* count){
    if(n == 1){
        cout << source << " -> " << des << endl;
        (*count)++;
        return;
    }
    hanoi(n - 1, aux, des, source,count);
    (*count)++;
    cout << source << " -> " << des << endl;
    hanoi(n - 1, aux, des, source,count);
}

int main(){
    int n = 5;
    int count = 0;

    hanoi(n, 'A', 'C', 'B', &count);
    cout << count << endl;
}