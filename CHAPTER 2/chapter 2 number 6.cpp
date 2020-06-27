#include<iostream>
using namespace std;
int main ()

{
    double dollar,British,France,Japanese,German;
    cout<<"Enter Dollar : ";
    cin>>dollar;
    British=dollar*1.487;
    France=dollar*0.172;
    German=dollar*0.584;
    Japanese=dollar*0.00955;
    cout<<"British Pound = "<<British<<endl;
    cout<<"France Franc = "<<France<<endl;
    cout<<"German Deutschemark = "<<German<<endl;
    cout<<"Japanese Yen = "<<Japanese<<endl;
    return 0;
}
