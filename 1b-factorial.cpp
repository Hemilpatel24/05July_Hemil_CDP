/*write a program of factorial using class.*/
#include<iostream>
using namespace std;

int main()
{
    int i,n;
    long factorial=1.0;

    cout<<"Enter any integer:";
    cin>> n;

    if(n<0)
    {
        cout<<"Please! Enter positive integer to continue"; 
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            factorial *=i;
        }

        cout<<"Factorial is :"<< factorial;
    }
    return 0;
}