#include<iostream>
#include<ctype.h>
using namespace std;
int main ()
{
    char letter;
    int result;
    cin>>letter;
    result=islower(letter);
    cout<<result;
    return 0;
}
