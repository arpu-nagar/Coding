// CPP Program to find the Greatest Common divisor 
// of two number which is in given range 
#include <bits/stdc++.h> 
using namespace std; 
  
// Return the greatest common divisor 
// of two numbers 
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
  
// Return the gretest common divisor of a 
// and b which lie in the given range. 
int maxDivisorRange(int a, int b, int l, int h) 
{ 
    int g = gcd(a, b); 
    int res = -1; 
  
    // Loop from 1 to sqrt(GCD(a, b). 
    for (int i = l; i * i <= g && i <= h; i++)  
  
        // if i divides the GCD(a, b), then  
        // find maximum of three numbers res, 
        // i and g/i 
        if (g % i == 0) 
            res = max({res, i, g / i}); 
      
    return res; 
} 
  
// Driven Program 
int main() 
{ 
    int a = 3, b = 27, l = 1, h = 5; 
    cout << maxDivisorRange(a, b, l, h) << endl; 
    return 0; 
} 