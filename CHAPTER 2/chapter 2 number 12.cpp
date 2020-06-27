#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    float decpound;
    int pound,shilling,pence;
    float decfrac,shillingfrac,pencefrac;
    cout<<"Enter New-style Pound = ";
    cin>>decpound;
    pound=static_cast<int>(decpound);
    decfrac=decpound-pound;
    shillingfrac=decfrac*20;
    shilling=static_cast<int>(shillingfrac);
    pencefrac=shillingfrac-shilling;
    pence=pencefrac*12;
    cout<<"old-style Pound = \x9c "<<pound<<"."<<shilling<<"."<<pence<<endl;
    return 0;
}
