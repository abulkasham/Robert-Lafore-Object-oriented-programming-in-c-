#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    char ch='a';
    unsigned long total=0;

    while(ch!='\r')
    {
        ch=getche();
        total = total * 10 + ch - '0';

    }
    cout<<"Number is : "<<total;
    return 0;
}
