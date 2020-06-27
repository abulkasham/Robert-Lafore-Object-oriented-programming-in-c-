#include<iostream>
using namespace std;
int main ()
{
    int i,j,k;
    cout<<"The pyramid is"<<endl;
    for(i=1;i<20;i++)
    {
         for(k=i;k<20;k++)
            {
                cout<<" ";
            }
         for(j=1;j<=(2*i)-1;j++)
         {
            cout<<"*";
         }
    cout<<endl;
    }

}
