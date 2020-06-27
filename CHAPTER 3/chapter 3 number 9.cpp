#include<iostream>
using namespace std;
int main()
{
    int i,people,chair,fact=1;
    cin>>people>>chair;
    for(i=people;i>people-chair;i--)
    {
        fact=fact*i;
    }
    cout<<fact;
}
