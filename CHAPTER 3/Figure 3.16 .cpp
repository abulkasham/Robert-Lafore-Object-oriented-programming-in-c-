#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    const unsigned char white=219;
    const unsigned char gray=176;
    unsigned char ch;
    for(int count=0;count<2000;count++)
    {
        ch=white;
        for(int j=2;j<count;j++)
        {
            if(count%j==0)
            {
                ch=gray;
                break;
            }

        }
        cout<<ch;
    }
    getch();
    return 0;
}
