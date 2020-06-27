#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    double n1,n2,Answer=0;
    char ch,oper;
    do
    {
        cout<<"Enter First Number, operator and Second Number = ";
        cin>>n1>>oper>>n2;
        switch(oper)
        {
            case '+':
                    Answer=n1+n2;
                    break;
            case '-':
                    Answer=n1-n2;
                    break;
            case '*':
                    Answer=n1*n2;
                    break;
            case '/':
                    Answer=n1/n2;
                    break;
            default :
                     cout<<"Error";
        }
        cout<<"Answer is = "<<Answer;
        cout << "\nDo another(Enter y or n) ? ";
        cin >> ch;
    }while(ch!='n');
}
