#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int k;
    float x,celcius,fahrenheit;
    cout<<"If you want to convert fahrenheit to celcius press 1"<<endl;
    cout<<"If you want to convert  celcius to fahrenheit press 2"<<endl;
    cin>>k;
    switch(k)
    {
        case 1:
            cout<<"Enter the number you want to convert = ";
            cin>>x;
            celcius=(((x-32)*5)/9);
            cout<<"celcius"<<" "<<celcius;
            break;
        case 2:
            cout<<"Enter the number you want to convert = ";
            cin>>x;
            fahrenheit=(((x*9)/5)+32);
            cout<<"Fahrenheit = "<<" "<<fahrenheit;
            break;
        default:
            cout<<"wrong Key";
    }
    return 0;
}
