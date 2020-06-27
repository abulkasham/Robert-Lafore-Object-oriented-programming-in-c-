#include<iostream>
#include<iomanip>
using namespace std;
int main (void)
{
    double a,b,c,d,sum1=0,sum2=0;
    char dumychar;
    cout<<"Enter First Number a/b= ";
    cin>>a>>dumychar>>b;
    cout<<"Enter Second Number c/d= ";
    cin>>c>>dumychar>>d;
    sum1=((a*d)+(b*c));
    sum2=(b*d);
    cout<<"Sum = "<<sum1<<"/"<<sum2<<endl;
    return 0;
}
