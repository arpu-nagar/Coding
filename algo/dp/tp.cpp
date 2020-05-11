#include<bits/stdc++.h>
using namespace std;
int minOperations(int x, int y, int p, int q) 
{ 
  

    if (y % x != 0) 
        return -1; 
  
    int d = y / x; 
  

    int a = 0; 
  

    while (d % p == 0) { 
        d /= p; 
        a++; 
    } 

    int b = 0; 
  
    while (d % q == 0) { 
        d /= q; 
        b++; 
    } 
  
    if (d != 1) 
        return -1; 
  
    return (a + b); 
} 
  
// Driver code 
int main() 
{ 
    int x,y;
    cin >> x >> y;
  
    cout << minOperations(x, y, 2, 3)<< endl; 
  
    return 0; 
} 