#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,c,d;

    float result,pre;
    char chose,ch,dumychar;
    do
    {

        cout<<"Chose What you want to do (+ , - , * , /) : ";
        chose=getche();
        cout<<endl<<endl;
        switch(chose)
        {
        case '+':
            cout<<"enter first Number = ";
            cin>>a>>dumychar>>b;
            cout<<endl;
            cout<<"enter second Number = ";
            cin>>c>>dumychar>>d;
            pre=(a*d)+(b*c);
            result=(b*d);
            break;
        case '-':
            cout<<"enter first Number = ";
            cin>>a>>dumychar>>b;
            cout<<endl;
            cout<<"enter second Number = ";
            cin>>c>>dumychar>>d;
            pre=(a*d)-(b*c);
            result=(b*d);
            break;
        case '*':
            cout<<"enter first Number = ";
            cin>>a>>dumychar>>b;
            cout<<endl;
            cout<<"enter second Number = ";
            cin>>c>>dumychar>>d;
            pre=(a*c);
            result=(b*d);
            break;
        case '/':
            cout<<"enter first Number = ";
            cin>>a>>dumychar>>b;
            cout<<endl;
            cout<<"enter second Number = ";
            cin>>c>>dumychar>>d;
            pre=(a*d);
            result=(b*c);
            break;
        default:
            cout<<"Error";
        }
        cout<<endl;
        cout<<"Result = "<<pre<<"/"<<result<<endl<<endl;
        cout<<"Want To Do Again (y / n) : ";
        ch=getche();
        cout<<endl<<endl;
    }while(ch!='n');
    return 0;
}
