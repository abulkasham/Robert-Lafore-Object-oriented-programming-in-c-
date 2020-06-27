#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    cout<<setiosflags(ios::left)<<setw(20)<<"Last Name"<<setiosflags(ios::left)<<setw(20)<<"First Name"
        <<setiosflags(ios::left)<<setw(20)<<"Street Address"<<setiosflags(ios::left)<<setw(20)<<"Town"
        <<setiosflags(ios::left)<<"State"<<endl<<endl;

    cout<<setiosflags(ios::left)<<setw(20)<<"Jones"<<setiosflags(ios::left)<<setw(20)<<"Bernard"
        <<setiosflags(ios::left)<<setw(20)<<"109 pine lane"<<setiosflags(ios::left)<<setw(20)<<"little town"
        <<setiosflags(ios::left)<<"MI"<<endl;

    cout<<setiosflags(ios::left)<<setw(20)<<"O'Brian"<<setiosflags(ios::left)<<setw(20)<<"Coleen"
        <<setiosflags(ios::left)<<setw(20)<<"40 e,99th Ave"<<setiosflags(ios::left)<<setw(20)<<"Bigcity"
        <<setiosflags(ios::left)<<"NY"<<endl;

    cout<<setiosflags(ios::left)<<setw(20)<<"Wong"<<setiosflags(ios::left)<<setw(20)<<"Harry"
        <<setiosflags(ios::left)<<setw(20)<<"121-A Alabama st"<<setiosflags(ios::left)<<setw(20)<<"Lakeville"
        <<setiosflags(ios::left)<<"IL"<<endl;

    return 0;
}
