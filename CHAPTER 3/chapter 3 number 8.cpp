#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int pound1,shilling1,pence1,pound2,shilling2,pence2,pound,shilling,pence;
    char ch;
    do
    {
        cout<<"Enter first amount = ";
        cin>>pound1>>shilling1>>pence1;
        cout<<"First amount = "<<pound1<<"."<<shilling1<<"."<<pence1<<endl;
        cout<<"Enter second amount = ";
        cin>>pound2>>shilling2>>pence2;
        cout<<"Second amount = "<<pound2<<"."<<shilling2<<"."<<pence2<<endl;
        pound=pound1+pound2;
        shilling=shilling1+shilling2;
        pence=pence1+pence2;

        if(pence>11)
        {
            shilling=shilling+(pence/12);
            pence=pence%12;
        }
        else if(shilling>19)
        {
            pound=pound+(shilling/19);
            shilling=shilling%19;

        }
        cout<<"Total is = "<<pound<<"."<<shilling<<"."<<pence<<endl;
        cout<<"Do you wish to continue?: (y/n)";
        ch=getche();
        cout<<endl;
    }while(ch!='n');

}
