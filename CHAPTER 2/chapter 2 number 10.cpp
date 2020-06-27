#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    double pound,shilling,pence,totalpound;
    cout<<"Enter Pound = ";
    cin>>pound;
    cout<<"Enter Shilling = ";
    cin>>shilling;
    cout<<"Enter Pence = ";
    cin>>pence;
    totalpound=(pound+(shilling/20)+(pence/240));
    cout<<"Decimal Pound = "<<setprecision(3)<<totalpound<<" \x9c"<<endl;
    return 0;
}
