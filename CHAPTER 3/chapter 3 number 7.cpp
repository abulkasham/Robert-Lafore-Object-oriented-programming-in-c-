#include<iostream>
using namespace std;
int main ()
{
    int i;
    float amount,years,interest,total=0;
    cout<<"Enter initial Amount = ";
    cin>>amount;
    cout<<"Enter Number Of Years = ";
    cin>>years;
    cout<<"Enter interest rate = ";
    cin>>interest;
    cout<<endl;
    for(i=1;i<=years;i++)
    {
        total=amount+(amount*(interest/100));
        cout<<"At the End Of the "<<i<<" st year you have = "<<total<<" $"<<endl<<endl;
        amount=total;

    }
}
