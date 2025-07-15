#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int temp;
    cout<<"Please enter the temperature(C)? "<<endl;
    cin>>temp;

    if(temp>30)
    {
        cout<<"It is hot outside! "<<endl;
    }
    else if(temp<=0)
    {
        cout<<"It is COLD outside *brrr! "<<endl;
    }
    else{
        cout<<"It is warm outside "<<endl;
    }

    getch();
}
