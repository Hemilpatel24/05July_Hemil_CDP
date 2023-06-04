/* C++ Program to print Fibonacci
 Series using Class template*/
 
#include <bits/stdc++.h>
using namespace std;
 
// Creating class for Fibonacci.
class Fibonacci {
 
    // Taking the integers as public.
public:
    int a, b, c;
    void generate(int);
};
 
void Fibonacci::generate(int n)
{
    a = 0;  
    b = 1;
 
    cout << a << " " << b;
 
    // Using for loop for continuing
    // the Fibonacci series.
    for (int i = 1; i <= n - 2; i++) {
 
        // Addition of the previous two terms
        c = a + b;
        cout << " " << c;
 
        /* Converting the new term
         into an old term to get
         more new terms in series.*/
        a = b;
        b = c;
    }
}
 
int main()
{
    int n = 10;
 
    Fibonacci fib;
    fib.generate(n);
    return 0;
}
