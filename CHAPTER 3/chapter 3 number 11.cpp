#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int pound,shilling,pence,pound1,shilling1,pence1,pound2,shilling2,pence2;
    char choise;
    do
    {
        char ch;

        cout<<"Choose what you want to Do(+ , - , * , /)  : ";
        ch=getche();
        cout<<endl;
        switch(ch)
        {
            case '+':
                cout<<"Enter First Amount = ";
                cin>>pound1>>shilling1>>pence1;
                cout<<endl;
                cout<<"Enter Second Amount = ";
                cin>>pound2>>shilling2>>pence2;
                pound=pound1+pound2;
                shilling=shilling1+shilling2;
                pence=pence1+pence2;
                break;
            case '-':
                cout<<"Enter First Amount = ";
                cin>>pound1>>shilling1>>pence1;
                cout<<endl;
                cout<<"Enter Second Amount = ";
                cin>>pound2>>shilling2>>pence2;
                pound=pound1-pound2;
                shilling=shilling1-shilling2;
                pence=pence1-pence2;
                break;
            case '*':
                cout<<"Enter First Amount = ";
                cin>>pound1>>shilling1>>pence1;
                cout<<endl;
                cout<<"Enter Second Amount = ";
                cin>>pound2>>shilling2>>pence2;
                pound=pound1*pound2;
                shilling=shilling1*shilling2;
                pence=pence1*pence2;
                break;
            case '/':
                cout<<"Enter First Amount = ";
                cin>>pound1>>shilling1>>pence1;
                cout<<endl;
                cout<<"Enter Second Amount = ";
                cin>>pound2>>shilling2>>pence2;
                pound=pound1/pound2;
                shilling=shilling1/shilling2;
                pence=pence1/pence2;
                break;
            default :
                cout<<"Wrong Key";

        }
        if(pence>=12)
            {
                shilling=shilling+(pence/12);
                pence=(pence%12);
            }
            else if(shilling>=20)
            {
                pound=pound+(shilling/20);
                shilling=(shilling%20);
            }
        cout<<"Total Amount= "<<pound<<"."<<shilling<<"."<<pence<<endl;
        cout<<"Do Another (y / n): ";
        choise=getche();
        cout<<endl;
    }while(choise!='n');
    return 0;
}

