#include<iostream>
using namespace std;
int main ()
{
    float amount,years=0,interest,total;
    cout<<"Enter initial Amount = ";
    cin>>amount;
    cout<<"Enter Number Of Total Amount= ";
    cin>>total;
    cout<<"Enter interest rate = ";
    cin>>interest;
    cout<<endl;
    while(total>=amount)
    {
        amount=amount+(amount*(interest/100));
        years++;

    }
    cout<<"At the End Of "<<years<<" year you have = "<<total<<" $"<<endl;
}

