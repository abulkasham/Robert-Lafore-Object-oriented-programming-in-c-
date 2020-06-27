#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int x,i,j,M=0,z=1;
    cout<<"Enter the number : ";
    cin>>x;
    for (i=1;i<=20;i++)
    {

        for(j=1;j<=10;j++)
        {
            M=x*z;
            z++;
            cout<<setiosflags(ios::left)<<setw(8)<<M;
        }
    cout<<endl;
    }


    return 0;

}
