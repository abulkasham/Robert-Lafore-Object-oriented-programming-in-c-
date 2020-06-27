#include<iostream>
using namespace std;
int main ()
{
    int x,fact=1;
    cout<<"Enter the Factor Number : ";
    cin>>x;
    while(x!=0)
    {
        fact*=x;//That means fact=fact*x
        x--;
    }
    cout<<"Factorial is : "<<fact;
}
